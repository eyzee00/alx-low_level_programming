#include "main.h"
#include <unistd.h>
/**
* _puts_recursion - prints a string recursively
* @s: the string to be printed
* Return: void
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		write(1, "\n", 1);
		return;
	}
	write(1, s, 1);
	i++;
	_puts_recursion(s + i);
}
