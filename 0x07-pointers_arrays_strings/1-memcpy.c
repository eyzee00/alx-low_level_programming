#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from src to dest
 * @src: memory source
 * @dest: memory destination
 * @n: number of bytes of src to be copied
 * Return: a pointer to destination (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	if (n > strlen(src))
		return (NULL);
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
