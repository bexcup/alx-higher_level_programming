#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    newmtrx = matrix.copy()
    for i in range(len(matrix)):
        newmtrx[i] = list(map(lambda x: x**2, matrix[i]))
    return newmtrx
