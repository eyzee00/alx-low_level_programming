#include "main.h"
/**
 * binary_to_uint - converst a biary number to decimal
 * @b: the binary number represented as string
 * Return: the number in decimal, (0) if the string contains
 * unsupported characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, expo = 0, decimal = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < strlen(b); i++)
		;
	for (i = i - 1; i >= 0; i--, expo++)
	{
		if (b[i] == 49)
			decimal += pow(2, expo);
	}
	return (decimal);
}
