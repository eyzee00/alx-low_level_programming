#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define NUMBER 612852475143
/**
 * main - prints the largest prime factors of the number: 612852475143
 *
 * Return: Always (0)
 */

int main (void)
{
	long i, j;
	long largest = 1;
	long num = sqrt(NUMBER);
	bool isprime;

	for (i = 2; i < num; i++)
	{
		if (NUMBER % i == 0)
		{
			isprime = true;
			for (j = 1; j <= sqrt(i); j++)
			{
				if (j != 1 && j != i && i % j == 0)
				{
					isprime = false;
				}
			}
			if(isprime)
			{
				if(i > largest)
					largest = i;
			}
		}
	}
	
	printf("%ld\n", largest);
}
