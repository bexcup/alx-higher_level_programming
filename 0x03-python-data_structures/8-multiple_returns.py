#!/usr/bin/python3
def multiple_returns(sentence):
    if sentence:
        first_lengthchar = (len(sentence), sentence[0])
    else:
        first_lengthchar = (0, None)
    return first_lengthchar
