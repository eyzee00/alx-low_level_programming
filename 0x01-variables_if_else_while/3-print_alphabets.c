#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 97;

	while (x < 123)
	{
		putchar(x);
		x++;
	}
	x = 65;
	while (x < 91)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
