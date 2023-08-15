#include "main.h"

/**
 * print_last_digit - function
 * @x: integer
 * Description: prints the last digit of the given number
 * Return: last digit of x
 */

int print_last_digit(int x)
{
	int last_digit, last_digit_abs;

	last_digit = x % 10;
	last_digit_abs = last_digit * (-1);
	if (x >= 0)
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		_putchar(last_digit_abs + '0');
		return (last_digit_abs);
	}
}
