#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a characater to the screen
 * @c: the character to be printed
 * Return: void
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
