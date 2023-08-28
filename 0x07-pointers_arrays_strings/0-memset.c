#include "main.h"
#include <string.h>
/**
 * _memset - fills memory starting from s, with char b
 * @n: last byte to be filled
 * @b: constant byte
 * Return: a pointer to a char, (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	if (n >= (int)strlen(s))
		n = (int)strlen(s) - 1;
	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
