#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates, allocates and initializes a two dimensional array
 * @width: number of columns
 * @height: number of rows
 * Return: (NULL)if the operation fails, or if
 * width or height is less or equal to 0
 * it returns a pointer to a pointer otherwise
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(grid + i) = (int *)malloc(width * sizeof(int));
	}
	return (grid);
}
