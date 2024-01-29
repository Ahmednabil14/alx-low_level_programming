#!/usr/bin/python3
"""interview question"""


def island_perimeter(grid):
    """ function  that returns the perimeter of the island described in grid"""
    i = 0
    j = 0
    perimeter = 0
    for ls in grid:
        j = 0
        for obj in ls:
            if obj == 1:
                try:
                    if grid[i - 1][j] == 0:
                        perimeter += 1
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                    if grid[i][j - 1] == 0:
                        perimeter += 1
                except IndexError:
                    pass
            j += 1
        i += 1
    return perimeter
