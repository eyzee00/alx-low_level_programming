#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to stdout followed by a newline
 * @str: the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
