#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: the string receiving src
 * @src: the string added to the end of dest
 * Return: pointer to the string, dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	int dest_length = strlen(dest), src_length = strlen(src);

	for (i = dest_length; i <= dest_length + src_length; i++, j++)
	{
		if (i == dest_length + src_length)
		{
			dest[i] = '\0';
			break;
		}
		dest[i] = src[j];
	}
	return (dest);
}
