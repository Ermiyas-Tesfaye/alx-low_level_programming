#include "main.h"
/**
 * free_grid - function frees a 2 dimensional grid
 * @grid: two dimentional array
 * @height: haight value
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
