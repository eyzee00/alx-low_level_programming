#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer to be printed
 * Return: Always (0)
 */

void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		n = n * (-1);
		num = n;
		_putchar('-');
	}

	num = n / 10;
	if (n != 0)
		print_number(num);

	_putchar((n % 10) + 48);
}
