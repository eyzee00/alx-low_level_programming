#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - prints the character pointed to by arg_list
 * @arg_list: pointer to the argument to print
 * Return: (void)
 */
void print_char(va_list arg_list)
{
	printf("%c", va_arg(arg_list, int));
}
/**
 * print_int - prints the int pointed to by arg_list
 * @arg_list: pointer to the int
 * Return: void
 */
void print_int(va_list arg_list)
{
	printf("%d", va_arg(arg_list, int));
}
/**
 * print_float - prints the float pointed to by arg_list
 * @arg_list: pointer to the float
 * Return: (void)
 */
void print_float(va_list arg_list)
{
	printf("%f", va_arg(arg_list, double));
}
/**
 * print_string - prints the string pointed to by arg_list
 * @arg_list: pointer to the string
 * Return: (void)
 */
void print_string(va_list arg_list)
{
	char *string = va_arg(arg_list, char *);

	if (string == 0)
		string = "(nil)";
	printf("%s", string);
}
/**
 * print_all - makes use of all the above functions
 * @format: a list of all the directives, any other character
 * besides it woll be ignored
 * Return: (void)
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, check = 0;
	char *separator = ", ";
	va_list arg_ptr;

	va_start(arg_ptr, format);
	while (*(format + i) != '\0' && format != 0)
	{
		check = 1;
		switch (format[i])
		{
		case 'c':
			print_char(arg_ptr);
			break;
		case 'i':
			print_int(arg_ptr);
			break;
		case 'f':
			print_float(arg_ptr);
			break;
		case 's':
			print_string(arg_ptr);
			break;
		default:
			check = 0;
			break;
		}
		if (format[i + 1] && check)
		{
			printf("%s", separator);
			check = 0;
		}
		i++;
	}
	printf("\n");
	va_end(arg_ptr);
}
