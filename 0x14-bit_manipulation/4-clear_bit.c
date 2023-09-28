#include "main.h"
/**
 * clear_bit - sets the bit at the given index to 0
 * @n: the number to alter
 * @index: the position of the bit to alter
 * Return: (1) if successful, (-1) otherwise
 */
int clear_bit(unsigned long *n, unsigned int index)
{
	unsigned long int filter = 1UL;

	if (index >= (sizeof(unsigned long) * 8 - 1))
		return (-1);
	filter = filter << index;
	filter = ~filter;
	*n = *n & filter;
	return (1);
}
