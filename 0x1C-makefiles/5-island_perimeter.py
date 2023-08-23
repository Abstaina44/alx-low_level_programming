#!/usr/bin/python3
"""
function def island_perimeter(grid):
that returns the perimeter of the island described in grid

"""


def water_cal(grid, i, j):
    """get the number of water around a grid."""

    number = 0

    if i <= 0 or not grid[i - 1][j]:
        number += 1
    if j <= 0 or not grid[i][j - 1]:
        number += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        number += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        number += 1

    return number


def island_perimeter(grid):
    """Find and return the perimeter."""

    peri = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                peri += water_cal(grid, i, j)

    return peri
