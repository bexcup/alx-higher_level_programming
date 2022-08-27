#!/usr/bin/python3
def replace_in_list(my_list, idx, element):
    if idx < 0:
        return my_list
    for counter in range(len(my_list)):
        if counter == idx:
            my_list[counter] = element
    return my_list
