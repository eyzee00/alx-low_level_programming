#include "main.h"

/**
 * print_triangle - prints a triangle using '#'
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, i, j;

	for (row = 1; row <= size; row++)
	{
		for (i = 1; i <= size - row; i++)
		{
			_putchar(32);
		}
		for (j = 1; j <= row; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
