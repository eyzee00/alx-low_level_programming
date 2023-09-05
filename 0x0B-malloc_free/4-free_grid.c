#include "main.h"
#include <stdlib.h>
/**
 * free_grid - deallocates heap memory previously allocated for (grid)
 * @grid: the two dimensional array to be freed
 * @height: number of rows or height of (grid)
 * Return: (void)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
