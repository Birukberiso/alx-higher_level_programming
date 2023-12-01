#!/usr/bin/python3
from sys import argv

if __name__ == "__main__":
    num_args = len(argv) - 1
    args = argv[1:]

    if num_args == 0:
        print("0 arguments.")
    else:
        if num_args == 1:
            print("1 argument:")
        else:
            print("{} arguments:".format(num_args))

        for index, arg in enumerate(args, start=1):
            print("{}: {}".format(index, arg))
