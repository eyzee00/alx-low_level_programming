#include "lists.h"
#include <sys/cdefs.h>
/**
 * print_before_main - prints a string before main
 * Return: (void)
 */
void __attribute__((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
