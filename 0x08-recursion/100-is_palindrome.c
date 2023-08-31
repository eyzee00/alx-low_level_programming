#include "main.h"
#include <string.h>
/**
 * palindrome_scanner - test each element of the string
 * starting from min to max
 * @min: starting point from the left
 * @max: starting point from the right
 * @s: string to be checked
 * Return: (1) if s is palindrome, (0) otherwise
 */

int palindrome_scanner(char *s, int min, int max)
{
	if (min >= max)
		return (1);
	if (*(s + min) == *(s + max))
		return (palindrome_scanner(s, min + 1, max - 1));
	return (0);
}
/**
 * is_palindrome - checks if s is palindrome
 * @s: string to be checked
 * Return: same as palindrome_scanner
 */

int is_palindrome(char *s)
{
	return (palindrome_scanner(s, 0, strlen(s) - 1));
}
