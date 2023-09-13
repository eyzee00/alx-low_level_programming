#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts the second integer from the first
 * @a: the first integer
 * @b: the second integer
 * Return: the result of the substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result of the multiplictation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides the first number by the second
 * @a: the number to be divided
 * @b: the dividor
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates the rest of the division of a by b
 * @a: the number divided
 * @b: the divisor
 * Return: the rest of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
