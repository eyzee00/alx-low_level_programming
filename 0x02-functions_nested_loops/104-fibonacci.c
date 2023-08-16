#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - Entry Point
 * Description: Find and print the first 98 fibonacci
 * numbers starting with 1 and 2.
 * Return: Always (0)
 */
int main(void)
{
	unsigned long int x = 0, i = 1, y = 0, j = 2;
	unsigned long int hld1, hld2, hld3;
	int k;

	printf("%lu, %lu, ", i, j);
	for (k = 2; k < 98; k++)
	{
		if (i + j > LARGEST || x > 0 || y > 0)
		{
			hld1 = (i + j) / LARGEST;
			hld2 = (i + j) % LARGEST;
			hld3 = x + y + hld1;
			x = y, y = hld3;
			i = j, j = hld2;
			printf("%lu%010lu", y, j);
		}
		else
		{
			hld2 = i + j;
			i = j, j = hld2;
			printf("%lu", j);
		}
		if (k != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
