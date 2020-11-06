import argparse
import subprocess

from lib.utils import *
from config import config as c


def get_compile_options():
    options = ""

    compile_languages = c.COMPILE_LANGUAGES
    compile_args = {
        "python": "--python",
        "c": "--cpp",
        "cpp": "--cpp"
    }
    for lang, value in compile_languages.items():
        if value:
            options += "{0}".format(compile_args[lang])
    return options


def usage():
    print("Usage: python main.py [OPTION]")


def main():
    parser = argparse.ArgumentParser(description='Flatbuffers schema compiler',
                                     add_help=True)
    parser.add_argument("-f", "--flatc", action="store", dest='flatc_path', metavar="PATH",
                        help="FlatC executable", default="flatc")
    args = parser.parse_args()

    process = subprocess.Popen("{0} --version".format(args.flatc_path), stdout=subprocess.PIPE, shell=True)
    out, _ = process.communicate()
    err = process.returncode
    if err or "flatc" not in str(out):
        if args.flatc_path == "flatc":
            print("Couldn't find flatc executable in $PATH")
        else:
            print("Couldn't execute flatc, is {0} the correct path?".format(args.flatc_path))
        exit(1)

    print("====== Schema compilation ======")
    paths = parse_network_multipath(c.FLATBUF_SCHEMA_FILE)
    for network_name, path in paths.items():
        options = get_compile_options()
        print("{0} {1} -o {2} {3}".format(args.flatc_path, options, os.path.dirname(path), path))
        os.system("{0} {1} -o {2} {3}".format(args.flatc_path, options, os.path.dirname(path), path))
        print("Compiled schema for {0}".format(network_name))
    print("done.")


if __name__ == "__main__":
    main()

