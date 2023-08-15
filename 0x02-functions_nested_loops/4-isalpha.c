#include "main.h"

/**
 * _isalpha - function
 * @c: takes character as input
 * Description: checks if c is a letter, lowercase or uppercase
 * Return: returns 1 if it's a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
