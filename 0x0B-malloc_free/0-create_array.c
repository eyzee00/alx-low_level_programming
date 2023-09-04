#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of type char and initializes it to b
 * @size: size of the array
 * @b: the character we initialize the array with
 * Return: (NULL) if size = 0, the array created otherwise
 */
char *create_array(unsigned int size, char b)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		*(array + i) = b;
	}
	return (array);
}
