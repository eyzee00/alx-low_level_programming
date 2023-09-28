#include "main.h"
/**
 * get_endianness - checks if the processor architecture uses
 * a little Endian representation, or a big Endian one
 * Return: (0) if big Endian, (1) if little Endian
 */
int get_endianness(void)
{
	unsigned int test = 2001;
	unsigned char *byteptr = (unsigned char *) &test;

	if (*byteptr == 0)
		return (0);
	else
		return (1);
}
