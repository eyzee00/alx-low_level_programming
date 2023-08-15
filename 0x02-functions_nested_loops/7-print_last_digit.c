#include "main.h"

/**
 * print_last_digit - function
 * @x: integer
 * Description: prints the last digit of the given number
 * Return: last digit of x
 */

int print_last_digit(int x)
{
	if (x >= 0)
	{
		_putchar((x % 10) + 48);
		return (x % 10);
	}
	else
	{
		_putchar((-x % 10) + 48);
		return (-x % 10);
	}
}
