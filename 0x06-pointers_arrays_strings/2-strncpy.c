#include "main.h"
#include <string.h>
/**
 * _strncpy - copies n bytes of src to dest
 * n should be smaller than strlen(dest)
 * if n is bigger than strlen(src)
 * write '\0' in each case after copying src
 * @dest: string receiving the copying
 * @src: string being copied
 * @n: number of bytes copied from src
 * Return: a pointer to the resulting string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, dest_len = strlen(dest), src_len = strlen(src);

	if (n >= strlen(dest))
		return (NULL);
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
			break;
		}
	}
	return (dest),
}
