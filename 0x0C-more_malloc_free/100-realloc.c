#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a new space in heap memory
 * where the size == new_size
 * @new_size: the size in bytes to allocate
 * @old_size: the size in bytes of the previously allocated memory
 * @ptr: a void pointer to the previously allocated memory
 * Return: (ptr) if new_size == old_size,
 * if (new_size == 0) and (ptr) is not NULL, then free(ptr),
 * if (ptr) is NULL, then the call is equivalent to malloc(new_size)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_pointer;
	char *old_stuff, *new_stuff;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size > old_size)
	{
		new_pointer = malloc(new_size);
		if (new_pointer == NULL)
			return (NULL);
		old_stuff = ptr;
		new_stuff = new_pointer;
		for (i = 0; i < old_size; i++)
			new_stuff[i] = old_stuff[i];
		free(ptr);
	}
	return (new_pointer);
}
