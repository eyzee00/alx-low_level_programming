#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n values of the array a
 * @a: array to be printed
 * @n: how many elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i <= n - 1)
			printf(", ");
	}
	printf("\n");;
}
