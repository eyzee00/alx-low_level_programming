#include "main.h"

/**
 * times_table - function
 * Description: prints the times table from 0 to 9
 * Return: void
 */

void times_table(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			_putchar((i * j) + 48);
			if (j < 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(',');
			}
			j++;
		}
		j = 0
		_putchar('\n');
		i++;
	}
}
