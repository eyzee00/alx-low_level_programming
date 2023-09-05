#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates the arguments of a program to one string
 * @ac: number of arguments
 * @av: pointer to a an array of pointers to characters
 * Return: (NULL) if av = 0 or av = NULL,
 * a pointer to the resulting string otherwise
 */

char *argstostr(int ac, char **av)
{
	int size = 0, i, j, k = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		size += (int)strlen(av[i]) + 1;
	}
	result = (char *)malloc(size * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';
	return (result);
}
