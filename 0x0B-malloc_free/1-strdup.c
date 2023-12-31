#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - allocates a new space in memory an puts the copy
 * of the string (str) in it
 * @str: the string to copied
 * Return: a pointer to the copy, or (NULL) if the allocation
 * fails
 */
char *_strdup(char *str)
{
	int i, size;
	char *str_copy;

	if (str == NULL)
		return (NULL);

	size = (int)strlen(str);
	str_copy = malloc((size + 1) * sizeof(char));
	if (str_copy == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(str_copy + i) = *(str + i);
	}
	return (str_copy);
}
