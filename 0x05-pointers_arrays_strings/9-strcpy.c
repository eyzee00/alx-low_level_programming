#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the source string and pastes it 
 * in the destination striong
 * @dest: destination pointed to
 * @src: source pointed to
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < strlen(dest); i++)
	{
		if(src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = src[i];
			break;
		}
	}
	return dest;
}
