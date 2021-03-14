import sys
import argparse
import subprocess

from lib.utils import *
from config import config as c


def run_command(command):
    print(f"running '{command}'")
    process = subprocess.Popen(
        command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True
    )
    process.wait()

    code = process.returncode

    out, out_err = process.communicate()
    return out.decode("utf-8"), out_err.decode("utf-8"), code


def get_languages():
    return c.CONFIG_LANGUAGES


def get_flatc_options():
    options = ""

    compile_languages = c.CONFIG_LANGUAGES
    lang_args = {
        "python": "--python",
        "c": "",  # supported only by FlatCC
        "cpp": "--cpp",
    }
    for lang in compile_languages:
        options += "{0}".format(lang_args[lang])
    return options


def get_flatcc_options():
    options = ""

    compile_args = ["-a"]
    for value in compile_args:
        if value:
            options += "{0}".format(value)
    return options


def usage():
    print("Usage: python main.py [OPTION]")


def main():
    flatc_options = get_flatc_options()
    flatcc_options = get_flatcc_options()

    parser = argparse.ArgumentParser(
        description="Flatbuffers schema compiler", add_help=True
    )
    parser.add_argument(
        "-fc",
        "--flatc",
        action="store",
        dest="flatc_path",
        metavar="PATH",
        help="FlatC executable",
        default="flatc",
    )
    parser.add_argument(
        "-fcc",
        "--flatcc",
        action="store",
        dest="flatcc_path",
        metavar="PATH",
        help="FlatCC executable",
        default="flatcc",
    )
    parser.add_argument(
        "-fccl",
        "--flatcc-lib-path",
        action="store",
        dest="flatcc_lib_path",
        metavar="PATH",
        help="Overwrite path of FlatCC library (default is ./flatcc)",
        default=None,
    )
    args = parser.parse_args()

    flatcc = False
    if "c" in get_languages():  # flatcc
        out, err_out, err_code = run_command("{0} --version".format(args.flatcc_path))

        if err_code or "flatcc" not in str(out + err_out):
            if args.flatcc_path == "flatcc":
                print("Couldn't find flatcc executable in $PATH")
            else:
                print(f"Couldn't execute flatcc, is {args.flatcc_path} the correct path?")
            exit(1)

        flatcc = True

    flatc = False
    
    if not ("c" in get_languages() and len(get_languages()) == 1):  # flatc
        out, err_out, err_code = run_command("{0} --version".format(args.flatc_path))

        if err_code or "flatc" not in str(out):
            if args.flatc_path == "flatc":
                print("Couldn't find flatc executable in $PATH")
            else:
                print(
                    "Couldn't execute flatc, is {0} the correct path?".format(
                        args.flatc_path
                    )
                )
            exit(1)

        flatc = True
        
    print("====== Schema compilation ======")
    paths = parse_network_multipath(c.FLATBUF_SCHEMA_FILE)
    for network_name, path in paths.items():
        if flatc:
            # Generating files with flatc
            out_path = f"{os.path.dirname(path)}/flatc"
            if not os.path.exists(out_path):
                os.mkdir(out_path)
            command = f"{args.flatc_path} {flatc_options} -o {out_path} {path}"
            out, err_out, err_code = run_command(command)
            if err_code != 0:
                print(err_out, file=sys.stderr)
                sys.exit(f"The command returned error code {err_code}")

        if flatcc:
            # Generating files with flatcc
            out_path = f"{os.path.dirname(path)}/c"
            if not os.path.exists(out_path):
                os.mkdir(out_path)
            command = f"{args.flatcc_path} {flatcc_options} -o {out_path} {path}"
            out, err_out, err_code = run_command(command)
            if err_code != 0:
                print(err_out, file=sys.stderr)
                sys.exit(f"The command returned error code {err_code}")

            # Replacing flatcc library path in generated files
            if args.flatcc_lib_path is not None:
                find_pattern = "#include \"flatcc/"
                replace_with = f"#include \"{args.flatcc_lib_path}"
                
                # Check if user included trailing '/' in path
                replace_with += "" if args.flatcc_lib_path[-1] == "/" else "/"
                
                for root, _, files in os.walk(out_path):
                    for file_path in files:
                        if file_path[-2:] not in [".c", ".h"]:  # check for file type
                            continue
                        file_path = root + "/" + file_path
                        with open(file_path, "r") as file:
                            text = file.readlines()
                        text = [line.replace(find_pattern, replace_with) for line in text]
                        with open(file_path, "w") as file:
                            file.writelines(text)
                    
        print("Compiled schema for {0}".format(network_name))
        
    print("done.")


if __name__ == "__main__":
    main()
