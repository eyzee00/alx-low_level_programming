#include "main.h"

/**
 * print_last_digit - function
 * @x: integer
 * Description: prints the last digit of the given number
 * Return: last digit of x
 */

int print_last_digit(int x)
{
	_putchar((x % 10) + '0');
	return (x % 10);
}
