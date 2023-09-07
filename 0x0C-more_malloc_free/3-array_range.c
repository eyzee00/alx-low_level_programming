#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of size (max - min + 1),
 * and fills it with values starting from
 * min(included) to max(included)
 * @min: starting number
 * @max: last number
 * Return: (NULL) if min > max or if allocation fails,
 * a pointer to the array is returned otherwise
 */
int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
		return (NULL);
	if (min == max)
	{
		array = malloc(1 * sizeof(int));
		if (array == NULL)
			return (NULL);
		*array = min;
	}
	else 
	{
		size = max - min + 1;
		array = malloc(size * sizeof(int));
		if (array == NULL)
			return (NULL);
		for (i = 0; i <= size && min <= max; i++, min++)
			*(array + i) = min;
	}
	return (array);
}
