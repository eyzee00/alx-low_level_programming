#include "main.h"
#include <stdio.h>
#include <unistd.h>

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
		write(1, str + i, 1);
	}
	write(1, "\n", 1);
}
