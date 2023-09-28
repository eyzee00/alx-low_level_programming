#include "main.h"
#include <limits.h>
/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number to check
 * @index: the bit to check its value
 * Return: the value of the bit, (-1) if the index is invalid
 */
int get_bit(unsigned long n, unsigned int index)
{
	unsigned long filter = 1UL;

	if (index >= (sizeof(unsigned long) * 8))
		return (-1);
	filter = filter << index;
	if (n & filter)
		return (1);
	else
		return (0);
}
