#include "main.h"

/**
 * print_sign - function
 * @x: integer
 * Description: prints + if x is positive, - if negative
 * and 0 if it's zero
 * Return: 1 if x is positive, -1 if negative and zero otherwise
 */

int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
