#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints the sum of even terms in fibonacci sequence
 * Return: Always (0) (Success)
 */
int main(void)
{
	long x = 1, y = 2, sum = y;

	while (x + y < 4000000)
	{
		y = y + x;
		if (y % 2 == 0)
		{
			sum = sum + y;
		}
		x = y - x;
	}
	printf("%ld\n", sum);
	return (0);
}
