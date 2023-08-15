#include "main.h"

/**
 * _islower - function
 * @c: character
 * Description: checks if a c is lowercase
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(char c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
