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
	unsigned int i;

	if (n > (unsigned int)strlen(src))
		return (0);
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
