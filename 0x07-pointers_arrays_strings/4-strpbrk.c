#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strpbrk - searches s for the first occurence of any byte of accept
 * @s: the string tested
 * @accept: the bytes we are searching for
 * Return: a pointer to the first occurence of any byte of accept,
 * return NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
	}
	if (i < strlen(s))
		return (s + i);
	else
		return (NULL);
}
