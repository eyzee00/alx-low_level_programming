#include "main.h"
#include <limits.h>

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
		_putchar((x % 10) + '0');
		return (x % 10);
	}

	else
	{
		int a = -x;
		_putchar(a % 10) + '0'));
		return (a % 10);
	}
}
