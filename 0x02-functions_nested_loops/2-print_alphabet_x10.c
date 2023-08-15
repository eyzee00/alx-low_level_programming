#include "main.h"

/**
 * print_alphabet_x10 - function
 * Description: prints the alphabet in lowercase 10 times
 * followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 1, j = 97;

	while (i <= 10)
	{
		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
		j = 97;
	}
}
