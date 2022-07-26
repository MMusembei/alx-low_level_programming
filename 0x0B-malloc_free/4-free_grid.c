#include "main.h"
/**
 * free_grid - frees a 2d grid prev created by alloc-grid
 * @grid: pointer: pointer to 2d grid
 * @height: no. of rows
 * Return: nothing, it frees memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
