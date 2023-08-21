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
	int len = (int)strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			write(1, str + i, 1);
		}
	}
	else if (len % 2 != 0)
	{
		for (i = (len - 1) / 2; i < len; i++)
		{
			write(1, str + i, 1);
		}
	}
	write(1, "\n", 1);
}
