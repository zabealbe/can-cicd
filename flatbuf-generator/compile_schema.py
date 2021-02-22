import argparse
import subprocess

from lib.utils import *
from config import config as c


def get_languages():
    return c.CONFIG_LANGUAGES


def get_flatc_options():
    if not c.FLATC_ENABLE:
        return False

    options = ""

    compile_languages = c.FLATC_CONFIG_LANGUAGES
    lang_args = {
        "python": "--python",
        "c": "",
        "cpp": "--cpp"
    }
    for lang, value in compile_languages.items():
        if value:
            options += "{0}".format(lang_args[lang])
    return options


def get_flatcc_options():
    if not c.FLATCC_ENABLE:
        return False

    options = ""

    compile_args = [
        "-a"
    ]
    for value in compile_args:
        if value:
            options += "{0}".format(value)
    return options


def usage():
    print("Usage: python main.py [OPTION]")


def main():
    flatc_options = get_flatc_options()
    flatcc_options = get_flatcc_options()

    parser = argparse.ArgumentParser(description='Flatbuffers schema compiler',
                                     add_help=True)
    parser.add_argument("-f", "--flatc", action="store", dest='flatc_path', metavar="PATH",
                        help="FlatC executable", default="flatc")
    parser.add_argument("-fc", "--flatcc", action="store", dest='flatcc_path', metavar="PATH",
                        help="FlatCC executable", default="flatcc")
    args = parser.parse_args()

    flatcc = False
    if "c" in get_languages():  # flatcc
        process = subprocess.Popen("{0} --version".format(args.flatcc_path), stdout=subprocess.PIPE,
                                   stderr=subprocess.PIPE, shell=True)
        out, out_err = process.communicate()
        err = process.returncode

        if err or "flatcc" not in str(out+out_err):
            if args.flatcc_path == "flatcc":
                print("Couldn't find flatcc executable in $PATH")
            else:
                print("Couldn't execute flatcc, is {0} the correct path?".format(args.flatcc_path))
            exit(1)

        flatcc = True

    flatc = False
    if not ("c" in get_languages() and len(get_languages()) == 1):  # flatc
        process = subprocess.Popen("{0} --version".format(args.flatc_path), stdout=subprocess.PIPE, shell=True)
        out, _ = process.communicate()
        err = process.returncode

        if err or "flatc" not in str(out):
            if args.flatc_path == "flatc":
                print("Couldn't find flatc executable in $PATH")
            else:
                print("Couldn't execute flatc, is {0} the correct path?".format(args.flatc_path))
            exit(1)

        flatc = True

    print("====== Schema compilation ======")
    paths = parse_network_multipath(c.FLATBUF_SCHEMA_FILE)
    for network_name, path in paths.items():
        if flatc:
            print("{0} {1} -o {2} {3}".format(args.flatc_path, flatc_options, os.path.dirname(path), path))
            os.system("{0} {1} -o {2} {3}".format(args.flatc_path, flatc_options, os.path.dirname(path), path))
        if flatcc:
            print("{0} {1} -o {2} {3}".format(args.flatcc_path, flatcc_options, os.path.dirname(path), path))
            os.system("{0} {1} -o {2} {3}".format(args.flatcc_path, flatcc_options, os.path.dirname(path), path))
        print("Compiled schema for {0}".format(network_name))
    print("done.")


if __name__ == "__main__":
    main()

