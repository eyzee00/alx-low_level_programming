#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - reverses an array of integers
 * @a: the array to be reversed
 * @n: length of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, *rev, j;

	rev = (int *)malloc(sizeof(int) * n);
	for (i = n - 1, j = 0; i >= 0; i--, j++)
		rev[j] = a[i];
	for (i = 0; i < n; i++)
		a[i] = rev[i];
	free(rev);
}
