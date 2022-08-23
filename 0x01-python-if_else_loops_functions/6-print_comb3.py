#!/usr/bin/python3
for number in range(0, 100):
    if number / 10 < number % 10 and number / 10 != number % 10:
        print("{:0>2d}".format(number), end="")
    else:
        continue
    if number < 89:
        print(", ", end="")
    else:
        print()
