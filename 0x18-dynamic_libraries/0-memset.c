#include "main.h"
/**
 * _memset - fills memory starting from s, with char b
 * @s: address of the memory block
 * @n: last byte to be filled
 * @b: constant byte
 * Return: a pointer to a char, (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
