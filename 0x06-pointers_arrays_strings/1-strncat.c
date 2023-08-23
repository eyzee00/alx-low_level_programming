#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 * @dest: the string which src is appended to
 * @src: the string appended to dest
 * @n: number of bytes(characters) from src
 *     appended to dest
 * Return: pointer to the string, (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int dest_len = (int)strlen(dest);

	if ((int)strlen(src) < n)
		n = strlen(src);
	for (i = dest_len, j = 0; i <= dest_len + n; i++, j++)
	{
		if (i == dest_len + n)
		{
			dest[i] = '\0';
			break;
		}
		dest[i] = src[j];
	}
	return (dest);
}
