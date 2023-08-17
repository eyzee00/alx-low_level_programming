#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUMBER 612852475143
/**
 * main - prints the largest prime factors of the number: 612852475143
 *
 * Return: Always (0)
 */

int main(void)
{
	long largest = 1;	
	long dividor = 2;
	long num = NUMBER;

	while (num != 0)
	{
		if (num % dividor != 0)
		{
			dividor++;
		}
		else
		{
			largest = num;
			num = num / dividor;
		}
		if (num == 1)
			break;
	}

	printf("%ld\n", largest);
	return (0);
}
