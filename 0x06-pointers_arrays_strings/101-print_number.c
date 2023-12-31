#include "main.h"
#include <stdio.h>

/**
 * print_number - prints am integer using _putchar
 * @n: the number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}

	number = (unsigned int) n / 10;
	if (number)
		print_number(number);

	_putchar((unsigned int) n % 10 + 48);
}
