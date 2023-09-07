#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for (nmemb) of elements,
 * each element size in byte is (size)
 * @nmemb: number of elements in the array to be created
 * @size: size of each element in bytes
 * Return: returns (NULL) if nmemb = 0 or size = 0 or
 * if the allocation process fails,
 * returns a void pointer to the memory location otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	char *set_to_zero;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	set_to_zero = pointer;
	for (i = 0; i < (nmemb * size); i++)
		*(set_to_zero + i) = 0;
	return (pointer);
}
