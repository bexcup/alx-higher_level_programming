#!/usr/bin/python3
def max_integer(my_list=[]):
    my_list.sort()
    if my_list:
        return my_list[len(my_list) - 1]
    else:
        return None
