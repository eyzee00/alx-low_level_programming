#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints the sum of numbers that are multiples
 * of 5 and 3 from 1 to 1024 excluded
 * Return: Always (0)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
