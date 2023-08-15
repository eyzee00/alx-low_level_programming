#include "main.h"

/**
 * times_table - function
 * Description: prints the times table from 0 to 9
 * Return: void
 */

void times_table(void)
{
	int i = 0, j = 0, prod;
	
	while (i < 10)
	{
		while (j < 10)
		{
			prod = i * j;
			if (prod / 10 == 0)
			{
				_putchar(prod + 48);
			}
			else
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			if (j < 9 && (prod / 10) == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(',');
			}
			else if(j < 9 && (prod / 10) != 0)
			{
				_putchar(' ');
				_putchar(',');
			}
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
