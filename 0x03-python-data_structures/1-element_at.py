#!/usr/bin/python3
def element_at(my_list, idx):
    counter = 0

    for int in my_list:
        if counter == idx:
            return (int)
        counter += 1
    return (None)
