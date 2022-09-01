#!/usr/bin/python3
def weight_average(my_list=[]):
    divid = 0
    divis = 0
    if not my_list:
        return 0
    for i in my_list:
        divid += (i[0] * i[1])
        divis += i[1]
    return divid / divis
