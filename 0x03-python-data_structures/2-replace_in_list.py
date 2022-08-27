#!/usr/bin/python3
def replace_in_list(my_list, idx, element):
    if idx < 0:
        return my_list
    for index in range(len(my_list)):
        if index == idx:
            my_list[index] = element
    return my_list
