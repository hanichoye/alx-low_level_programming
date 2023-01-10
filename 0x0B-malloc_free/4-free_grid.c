#include <stdlib.h>

/**
 * free_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @grid: takes in width of grid
 * @height: height of the grid
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
	free(grid[i]);
}

free(grid);
}
