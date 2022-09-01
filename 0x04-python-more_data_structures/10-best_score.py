#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary:
        for x, y in a_dictionary.items():
            if y is max(a_dictionary.values()):
                return x
    else:
        return None
