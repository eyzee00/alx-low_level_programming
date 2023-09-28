#include "main.h"
/**
 * power - calculates the first arg to the power of the second
 * @n: integer
 * @expo: exponent
 * Return: the result of the operation
 */
int power(int n, int expo)
{
	int i = 0, res = 1;

	if (expo == 0)
		return (1);
	while (i < expo)
	{
		res = res * n;
		i++;
	}
	return (res);
}
/**
 * binary_to_uint - converst a biary number to decimal
 * @b: the binary number represented as string
 * Return: the number in decimal, (0) if the string contains
 * unsupported characters
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, expo = 0, decimal = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < (int)strlen(b); i++)
		;
	for (i = i - 1; i >= 0; i--, expo++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == 49)
			decimal += power(2, expo);
	}
	return (decimal);
}
