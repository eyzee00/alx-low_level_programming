#include "main.h"

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

	number = n;
	if ((number / 10) != 0)
		print_number(number / 10);
	_putchar(n % 10 + 48);
}
