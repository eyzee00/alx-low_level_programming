#include "main.h"
#include <string.h>

/**
 * _strspn - searches s for a set of bytes accept
 * @s: the string operated on
 * @accept: the set of bytes we are looking for
 * Return: number of bytes consisting of accept bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != 32; i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
