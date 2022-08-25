#!/usr/bin/python3
import hidden_4
if __name__ == "__main__":
    name = dir(hidden_4)
    for iter in name:
        if iter[0] != '_':
            print(iter)
