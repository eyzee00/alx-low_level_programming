#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		write(1, s + i, 1);
	}
	write(1, "\n", 1);
}
