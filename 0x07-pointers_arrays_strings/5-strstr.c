#include "main.h"
#include <string.h>
#include <stdbool.h>
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
	bool isneedle = false;

	for (i = 0; i < strlen(haystack); i++)
	{
		if (*(haystack + i) == *(needle + j))
		{

			for (j = 1; j < strlen(needle); j++)
			{
				if (!(haystack[i + j] == needle[j]))
				{
					isneedle = false;
					break;
				}
				else
					isneedle = true;
			}
			if (isneedle)
				return (haystack + i);
			j = 0;
		}
	}
	return (NULL);
}
