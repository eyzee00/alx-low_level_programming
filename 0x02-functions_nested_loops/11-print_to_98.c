#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function
 * @n: integer, printing starts from n
 * Description: prints all natural numbers from n to 98
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		i = n;
		while (i >= 98)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
			i--;
		}
	}
	else
	{
		i = n;
		while (i <= 98)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
			i++;
		}
	}
	printf("\n");
}
