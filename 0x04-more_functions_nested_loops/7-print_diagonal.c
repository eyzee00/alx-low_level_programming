#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: length of the line
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');

			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
