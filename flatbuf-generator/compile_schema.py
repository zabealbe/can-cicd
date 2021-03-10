import sys
import argparse
import subprocess

from lib.utils import *
from config import config as c


def run_command(command):
    print(f'running "{command}"')
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
        "-f",
        "--flatc",
        action="store",
        dest="flatc_path",
        metavar="PATH",
        help="FlatC executable",
        default="flatc",
    )
    parser.add_argument(
        "-fc",
        "--flatcc",
        action="store",
        dest="flatcc_path",
        metavar="PATH",
        help="FlatCC executable",
        default="flatcc",
    )
    args = parser.parse_args()

    flatcc = False
    if "c" in get_languages():  # flatcc
        out, err_out, err_code = run_command("{0} --version".format(args.flatcc_path))

        if err_code or "flatcc" not in str(out + err_out):
            if args.flatcc_path == "flatcc":
                print("Couldn't find flatcc executable in $PATH")
            else:
                print(
                    "Couldn't execute flatcc, is {0} the correct path?".format(
                        args.flatcc_path
                    )
                )
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
            outpath = f"{os.path.dirname(path)}/flatc"
            if not os.path.exists(outpath):
                os.mkdir(outpath)
            command = f"{args.flatc_path} {flatc_options} -o {outpath} {path}"
            out, err_out, err_code = run_command(command)
            if err_code != 0:
                print(err_out, file=sys.stderr)
                sys.exit(f"The command returned error code {err_code}")

        if flatcc:
            outpath = f"{os.path.dirname(path)}/flatcc"
            if not os.path.exists(outpath):
                os.mkdir(outpath)
            os.symlink("../../../external/flatcc", "./flatcc", True)
            command = f"{args.flatcc_path} {flatcc_options} -o {outpath} {path}"
            out, err_out, err_code = run_command(command)
            if err_code != 0:
                print(err_out, file=sys.stderr)
                sys.exit(f"The command returned error code {err_code}")

        print("Compiled schema for {0}".format(network_name))
    print("done.")


if __name__ == "__main__":
    main()
