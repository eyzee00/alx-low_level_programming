#include "main.h"

/**
 * print_last_digit - function
 * @x: integer
 * Description: prints the last digit of the given number
 * Return: last digit of x
 */

int print_last_digit(int x)
{
	int y = _abs(x);

	_putchar((y % 10) + 48);
	return (y % 10);
}
