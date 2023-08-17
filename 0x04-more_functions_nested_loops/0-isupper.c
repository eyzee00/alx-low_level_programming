#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if c is in uppercase
 * @c: character tested
 * Return: (1) if c is uppercase, (0) otherwise
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
