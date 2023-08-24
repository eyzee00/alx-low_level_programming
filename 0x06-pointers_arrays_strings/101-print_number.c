#include "main.h"

/**
 * print_number - prints am integer using _putchar
 * @n: the number to be printed
 * Return: void
 */

void print_number(int n)
{
	int number;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	number = n;
	if (number / 10)
		print_number(number / 10);

	_putchar(n % 10 + 48);
}
