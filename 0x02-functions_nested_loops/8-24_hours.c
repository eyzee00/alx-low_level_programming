#include "main.h"

/**
 * jack_bauer - function
 * Description: prints every minute and hour up to 24 hours
 * format 00:00
 * Return: void
 */

void jack_bauer(void)
{
	int i = 0, j = 0;

	while (i < 24)
	{
		while (j < 60)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			j++;
			_putchar('\n');
		}
		j = 0;
		i++;
	}
}
