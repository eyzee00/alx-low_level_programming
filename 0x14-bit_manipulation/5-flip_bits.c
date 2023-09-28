#include "main.h"
/**
 * flip_bits - returns the number of bit flips necessary
 * to flip the first arg to the second
 * @n: the first number
 * @m: the second number
 * Return: the number of bit flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipcount = 0;
	unsigned long filter = 1UL, result;

	result = n ^ m;
	filter = filter << (sizeof(unsigned long) * 8 - 1);
	while (filter)
	{
		if (result & filter)
			flipcount++;
		filter = filter >> 1;
	}
	return (flipcount);
}
