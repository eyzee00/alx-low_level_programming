#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a n bytes of a string
 * @str: string to printed
 * @n: number of bytes to be printed
 * @l: line of string to print
 *
 * Return: void
 */

void print_line(char *str, int n, int l)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		if (i <= n)
			printf("%02x", str[l * 10 + i]);
		else
			printf("  ");
		if (i % 2)
			putchar(' ');
	}
	for (j = 0; j <= n; j++)
	{
		if (str[l * 10 + j] >= 32 && str[l * 10 + j] <= 126)
			putchar(str[l * 10 + j]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a string
 * @b: string to print
 * @size: size of string
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i;
	for (i = 0; i < size / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
