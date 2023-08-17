#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1 to 100, except for:
 * multiples of three; it prints fizz instead
 * multiples of five; it prints buzz instead
 * Return: Always (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz");
		else if ((i % 5) == 0 && (i % 3) != 0)
			printf("Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i < 100)
			putchar(32);
	}
	putchar('\n');

	return (0);
}
