#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates s1 and s2 in a new string
 * @s1: string 1
 * @s2: string 2
 * Return: the result of the concatenation, NULL if the operation fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size, i = 0, tmp;
	char *result;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	size = (unsigned int)(strlen(s1) + strlen(s2) + 1);
	result = (char *)malloc(size * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++
	}
	tmp = i;
	while (s2[i - tmp])
	{
		result[i] = s2[i - tmp];
		i++;
	}
	result[i] = '\0';
	return (result);
}
