#include "main.h"
#include <string.h>

/**
 * rev_string - reverses the given string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int length = strlen(s);
	char temp[1000];
	int i, j = 0;

	for (i = length - 1; i >= 0; i--)
	{
		temp[j] = s[i];
		j++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = temp[i];
	}
}
