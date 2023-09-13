#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - mini calculator
 * @argc: argument count, has to be 3
 * @argv: argument vector
 * r
 * Return: (0) if succesful
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL || argv[2][1] != 0)
	{
		printf("Error");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", operation(num1, num2));
	return (0);
}
