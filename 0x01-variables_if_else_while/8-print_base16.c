#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always (0) (success)
 */
int main(void)
{
	int x = 48;

	while (x < 103)
	{
		putchar(x);
		if (x == 57)
			x = 96;
		x++;
	}
	putchar('\n');
	return (0);
}
