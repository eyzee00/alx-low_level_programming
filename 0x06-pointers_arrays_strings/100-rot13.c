#include "main.h"

/**
 * rot13 - Encodes the string to rot13
 * @str: string to be encoded
 * Return: pointer to the string (str)
 */
char *rot13(char *str)
{
	int i, j;
	char rot13[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; rot13[j] != '\0'; j++)
		{
			if (str[i] == alpha[j] || str[i] == alpha[j] - 32)
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (str);
}
