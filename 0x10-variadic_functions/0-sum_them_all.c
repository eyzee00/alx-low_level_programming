#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculates the sum of its arguments
 * @n: the number of arguments
 * Return: (0) if n == 0, the result of the sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list arg_ptr;

	if (n == 0)
		return (0);
	va_start(arg_ptr, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(arg_ptr, int);
	return (sum);
}
