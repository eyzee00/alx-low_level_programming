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
	unsigned int s1_len, s2_len, i = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; *(s1 + s1_len) != 0; s1_len++)
		;
	for (s2_len = 0; *(s2 + s2_len) != 0; s2_len++)
		;
	if (n > s2_len)
		concat = malloc((s1_len + s2_len + 1) * sizeof(char));
	else
		concat = malloc((s1_len + n + 1) * sizeof(char));
	if (concat == 0)
		return (NULL);
	while (*(s1 + i) != 0)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	j = i;
	while (*(s2 + (i - j)) != 0 && (i - j) < n)
	{
		*(concat + i) = *(s2 + (i - j));
		i++;
	}
	*(concat + i) = '\0';
	return (concat);
}
