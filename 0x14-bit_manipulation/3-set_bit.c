#include "main.h"
/**
 * set_bit - set the bit at the given index to 1
 * @n: the number to alter
 * @index: the bit to set to 1
 * Return: (1) if the bit was set, (-1) otherwise
 */
int set_bit(unsigned long *n, unsigned int index)
{
	unsigned long filter = 1UL;

	if (index >= (sizeof(unsigned long) * 8))
		return (-1);
	filter = filter << index;
	*n = *n | filter;
	return (1);
}
