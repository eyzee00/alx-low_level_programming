#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints the first 50 fibonacci terms
 * Return: (0)
 */
int main(void)
{
	int i = 0;
	long x = 1, y = 2;

	for ( ; i < 50; i++)
	{
		if (i == 0)
		{
			printf("%ld", x);
		}
		else if (i == 1)
		{
			printf(", %ld", y);
		}
		else
		{
			y = y + x;
			x = y - x;
			printf(", %ld", y);
		}
	}
	printf("\n");
	return (0);
}
