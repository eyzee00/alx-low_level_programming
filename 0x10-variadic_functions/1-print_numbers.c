#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints the given integers separated by (seperator)
 * @separator: string used to separate the printed numbers
 * @n: number of integers to print
 * Return: (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int separate_or_not = 0;
	va_list arg_ptr;

	if (n == 0)
		return;
	if (separator != NULL)
		separate_or_not = 1;
	va_start(arg_ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_ptr, int));
		if (separate_or_not && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
