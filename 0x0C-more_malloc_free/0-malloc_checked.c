#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates b bytes in the heap memory
 * @b: number of bytes
 * Return: a void pointer to the block of memory,
 * otherwise the function exits with a value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	if (b == 0)
		return (NULL);
	pointer = malloc(b);

	if (pointer == 0)
		exit(98);
	return (pointer);
}
