#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes the function pointed to by (action)
 * for each element of the array given
 * @array: the array operated on
 * @size: the size of the array
 * @action: a pointer to the function to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(*(array + i));
}
