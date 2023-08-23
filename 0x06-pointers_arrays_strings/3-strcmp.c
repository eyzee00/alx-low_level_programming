#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: string number 1
 * @s2: string number 2
 * Return: positive integer if s1 > s2
 * negative integer if s1 < s2
 * 0 if s1 is equal to s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, s1_len = (int)strlen(s1), s2_len = (int)strlen(s2);
	int diff = 0;

	for (i = 0; i < s1_len || i < s2_len; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
		{
			diff = s1[i] - s2[i];
			break;
		}
	}
	return (diff);
}
