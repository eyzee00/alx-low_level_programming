#include "main.h"
#include <string.h>
/**
 * _strstr - locates needle in haystack
 * @haystack: the string to be tested
 * @needle: the string we are trying to locates
 * Return: the address of the first occurence,
 * otherwise a null pointer is returned
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j = 0;

	for (i = 0; i < strlen(haystack); i++)
	{
		for (j = 0; j < strlen(needle); j++)
		{
			if (!(haystack[i + j] == needle[j]))
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		j = 0;
	}
	return ('\0');
}
