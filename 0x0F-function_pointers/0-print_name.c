#include "function_pointers.h"
/**
 * print_name - prints a string, using the given function as arg
 * @f(): the function to used to print (name)
 * @name: the string to be printed
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
