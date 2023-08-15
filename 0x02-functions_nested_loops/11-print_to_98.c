#include "main.h"

/**
 * print_to_98 - function
 * @n: integer, printing starts from n
 * Description: prints all natural numbers from n to 98
 */

void print_to_98(int n)
{
	int i, last_digit, first_digit, middle_digit;

	if (n < 98)
	{
		i = n;
		while (i <= 98)
		{
			last_digit = i % 10;
			first_digit = i /10;
			if((first_digit) == 0)
			{
				_putchar(last_digit + 48);
			}
			else
			{
				_putchar(first_digit + 48);
				_putchar(last_digit + 48);
			}
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
	}
	else if (n > 98 && n < 100)
	{
		i = n;
		while (i >= 98)
		{
			last_digit = i % 10;
			first_digit = i / 10;
			_putchar(first_digit + 48);
			_putchar(last_digit + 48);
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i--;
		}
	}
	else if(n >= 100 && n < 1000)
	{
		i = n;
		while (i >= 98)
		{
			last_digit = i % 10;
			middle_digit = (i / 10) % 10;
			first_digit = i / 100;
			if(first_digit == 0)
			{
				_putchar(middle_digit + 48);
				_putchar(last_digit + 48);
			}
			else
			{
				_putchar(first_digit + 48);
				_putchar(middle_digit + 48);
				_putchar(last_digit + 48);
			}
			if(i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i--;
		}
	}
	else
	{
		_putchar(9 + 48);
		_putchar(8 + 48);
	}
	_putchar('\n');
}
