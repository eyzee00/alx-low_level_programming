#include "main.h"
#include <string.h>

/**
 * leet - encodes the string to 1337
 * @str: string to be encoded
 * Return: a pointer to (str)
 */
char *leet(char *str)
{
	int i, j, str_len = (int)strlen(str);
	char triggers[5] = {'a', 'e', 'o', 't', 'l'};
	char trig_replace[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; i < str_len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == triggers[j] || str[i] == triggers[j] - 32)
			{
				str[i] = trig_replace[j];
				break;
			}
		}
	}
	return (str);
}
