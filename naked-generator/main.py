from config import config as c
from generate_schema import generate_schema
from compile_schema import compile_schema


def main():
    generate_schema()
    compile_schema()


if __name__ == "__main__":
    main()
