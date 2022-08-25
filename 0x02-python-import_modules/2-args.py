#!/usr/bin/python3
from sys import argv
if __name__ == "__main__":
    count = len(argv) - 1
    if count > 1:
        s = "s:"
    elif count == 0:
        s = "s."
    else:
        s = ':'
    print("{} argument{}".format(count, s))
    for iter in range(1, count + 1):
        print("{}: {}".format(iter, count[iter]))
