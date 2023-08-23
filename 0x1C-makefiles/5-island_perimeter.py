#!/usr/bin/python3
"""
Calculate the perimeter of the island described in the grid.
"""


def island_perimeter(grid):
    """
    Create a function that calculate the perimeter
    of the island described in the grid

    Returns:
            int: The perimeter of the island.
    """
    perimeter = 0

    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4

                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2

                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
