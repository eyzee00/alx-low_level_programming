#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * besides 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i + 48) != 50 && (i + 48) != 52)
			_putchar(i + 48);
	}

	_putchar('\n');
}
