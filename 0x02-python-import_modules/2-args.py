#!/usr/bin/python3
from sys import argv
if __name__ == "__main__":
    argc = len(argv) - 1
    if argc > 1:
        s = "s:"
    elif argc == 0:
        s = "s."
    else:
        s = ':'
    print("{} argument{}".format(argc, s))
    for iter in range(1, argc + 1):
        print("{}: {}".format(iter, argv[iter]))
