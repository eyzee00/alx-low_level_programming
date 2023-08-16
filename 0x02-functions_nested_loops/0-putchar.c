#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints "_putchar" to stdrout
 * Return: Always (0)
 */

int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
