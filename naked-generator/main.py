from config import config as c
from generate_schema import generate_schema
from compile_schema import compile_schema


def main():
    # Config validity checks
    if c.OUTPUT_DIR[-1] != "/":
        print("OUTPUT_DIR in config.py isn't a valid directory path")
        print("examples:\n\t./path/to/directory/\n\tpath/to/directory/")
        exit(1)
    
    generate_schema()
    compile_schema()


if __name__ == "__main__":
    main()
