#include "main.h"

/**
  * print_times_table - function
  * @n: integer
  * Description: prints n times table
  * Return: void
  */
void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				if (prod > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((prod / 100) + 48);
					_putchar(((prod / 10) % 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else if (prod > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((prod / 10) % 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(prod + 48);
				}
			}
			_putchar('\n');
		}
	}
}

