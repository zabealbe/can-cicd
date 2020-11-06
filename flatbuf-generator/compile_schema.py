import argparse

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
                        help="FlatC executable")
    args = parser.parse_args()

    print("====== Schema compilation ======")
    if args.flatc_path:
        if os.system("{0} -h &> /dev/null".format(args.flatc_path)):
            print("Couldn't execute flatc, is {0} the correct path?".format(args.flatc_path))
            exit(1)
    else:
        if os.system("flatc -h &> /dev/null"):
            print("Couldn't find flatc executable in $PATH")
            exit(1)
        args.flatc_path = "flatc"

    paths = parse_network_multipath(c.FLATBUF_SCHEMA_FILE)
    for network_name, path in paths.items():
        options = get_compile_options()
        os.system("{0} {1} -o {2} {3}".format(args.flatc_path, options, os.path.dirname(path), path))
        print("Compiled schema for {0}".format(network_name))
    print("done.")


if __name__ == "__main__":
    main()

