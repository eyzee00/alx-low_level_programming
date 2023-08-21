#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * starting from the first character
 * @str: the string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str) - 1; i++)
	{
		write(1, str + i, 1);
		i++;
	}
}
