#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: the character to be tested
 * Return: (1) if c is a digit, (0) otherwise
 */

int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
