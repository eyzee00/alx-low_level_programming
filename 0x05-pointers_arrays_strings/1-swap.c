#include "main.h"

/**
 * swap_int - swapes the values of a and b
 * @a: pointer to an int
 * @b: pointer to another int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
