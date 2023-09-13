#include "function_pointers.h"
/**
 * int_index - searches for an int inside an array of int
 * @size: size of the array
 * @array: the array operated on
 * @cmp: a pointer to the function used to compare values
 * Return: the index of the first element for which the
 * function pointed to by (cmp) doesn't return (0), if no
 * match is found, return (-1)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
