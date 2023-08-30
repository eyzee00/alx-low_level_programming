#include "main.h"

/**
 * factorial - calculates factorial of n
 * @n: positive integer
 * Return: -1 if n < 0, otherwise the result of the calculation
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
