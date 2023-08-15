#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function
 * Description: takes nothing as arguments, prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
