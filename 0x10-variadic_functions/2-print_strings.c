#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints the strings given as arguments seperated
 * by (separator)
 * @separator: the string to be printed in between the strings
 * @n: the number of strings
 * Return: (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int separate_or_nah = 0;
	char null_string[] = "(nil)";
	char *handler;
	va_list arg_ptr;

	if (separator != NULL)
		separate_or_nah = 1;
	va_start(arg_ptr, n);
	for (i = 0; i < n; i++)
	{
		handler = va_arg(arg_ptr, char *);
		if (handler == NULL)
			printf("%s", null_string);
		else
			printf("%s", handler);

		if (separate_or_nah && i < n - 1)
			printf("%s", separator);
	}
	va_end(arg_ptr);
	printf("\n");
}
