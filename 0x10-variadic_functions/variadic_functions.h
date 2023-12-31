#ifndef __VARIADIC__FUNCTION__
#define __VARIADIC__FUNCTION__
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg_list);
void print_int(va_list arg_list);
void print_float(va_list arg_list);
void print_string(va_list arg_list);

#endif
