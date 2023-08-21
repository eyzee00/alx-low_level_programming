#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * puts_half - prints the second half of the string
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	if (strlen(str) % 2 == 0)
	{
		for (i = strlen(str) / 2; i < strlen(str); i++)
		{
			write(1, str + i, 1);
		}
	}
	else
	{
		for (i = (strlen(str) - 1) / 2; i < strlen(str); i++)
		{
			write(1, str + i, 1);
		}
	}
	write(1, "\n", 1);
}
