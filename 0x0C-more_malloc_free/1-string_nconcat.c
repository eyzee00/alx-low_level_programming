#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates s1 and n bytes of s2
 * if n is greater or equal to the length of s2, use the whole string
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of s2 to be concatenated to s1
 * Return: (NULL) if function fails, or memory allocation fails,
 * otherwise a pointer to the resulting string is returned
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int size, i, tmp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= (unsigned int)strlen(s2))
		n = strlen(s2);
	size = (unsigned int)strlen(s1) + n + 1;
	concat = malloc(size * sizeof(char));
	if (concat == 0)
		return (NULL);
	while (*(s1 + i) != 0 && s1 != NULL)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	tmp = i;
	while (*(s2 + (i - tmp)) != 0 && (i - tmp) < n && s2 != NULL)
	{
		*(concat + i) = *(s2 + (i - tmp));
		i++;
	}
	*(concat + i) = '\0';
	return (concat);

}
