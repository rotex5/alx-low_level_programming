#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 * @grid: grid
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	a = height - 1;
	while (a >= 0)
	{
		free(grid[a]);
		grid[a] = NULL;
		a--;
	}
	free(grid);
	grid = NULL;

}

