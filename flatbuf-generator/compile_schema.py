import os

import config
from lib.utils import *


def get_compile_options():
    options = ""

    compile_languages = config.COMPILE_LANGUAGES
    compile_args = {
        "python": "--python",
        "c": "--cpp",
        "cpp": "--cpp"
    }
    for lang, value in compile_languages.items():
        if value:
            options += "{0}".format(compile_args[lang])
    return options

def main():
    paths = parse_network_multipath(config.SCHEMA_FILE)
    for network_name, path in paths.items():
        options = get_compile_options()
        os.system("./bin/flatc {0} -o {1} {2}".format(options, os.path.dirname(path), path))


if __name__ == "__main__":
    main()

