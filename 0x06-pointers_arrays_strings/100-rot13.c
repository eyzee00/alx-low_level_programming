#include "main.h"

/**
 * rot13 - Encodes the string to rot13
 * @str: string to be encoded
 * Return: pointer to the string (str)
 */
char *rot13(char *str)
{
	int i;


	for (i = 0; str[i] != '\0'; i++)
	{
		for ( ; (str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90); )
		{
			if ((str[i] > 109 && str[i] <= 122) || (str[i] > 77 && str[i] <= 90))
			{
				str[i] = str[i] - 13;
				break;
			}
			str[i] = str[i] + 13;
			break;
		}
	}
	return (str);
}
