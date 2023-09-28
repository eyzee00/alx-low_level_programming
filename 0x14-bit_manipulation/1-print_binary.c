#include "main.h"
/**
 * _putchar - prints a character to the screen
 * @c: the char to be printed
 * Return: (void)
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * print_binary - prints the binary representation of the given arg
 * @n: the number to be printed in binary
 * Return: (void)
 */
void print_binary(unsigned long int n)
{
	unsigned long filter = 1UL;
	unsigned int is_leading_zero = 0;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	filter = filter << (sizeof(unsigned long) * 8 - 1);
	while (filter)
	{
		if (n & filter)
		{
			is_leading_zero = 1;
			_putchar(49);
		}
		else if (is_leading_zero != 0)
			_putchar(48);
		filter = filter >> 1;
	}
}
