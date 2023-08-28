#include "main.h"
#include <stdbool.h>
#include <stddef.h>
/**
 * _strchr - locates character c in _strchr
 * @s: the string operated on
 * @c: the character we are looking for
 * Return: Address of the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;
	bool isfound = false;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if(*(s + i) == c)
		{
			isfound = true;
			break;
		}
	}
	if (!isfound)
		return (NULL);
	else
		return (s + i);
}
