#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point, prints alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 97;

	while (x < 123)
	{
		if (x != 'q' && x != 'e')
			putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
