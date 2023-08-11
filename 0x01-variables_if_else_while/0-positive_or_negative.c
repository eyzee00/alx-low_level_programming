#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point, stores a random number in a variable
 * then prints the number and whether it's positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
