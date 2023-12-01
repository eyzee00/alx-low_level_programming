#include "hash_tables.h"

/**
 * key_index - gives you the hashed index of a key
 * using the djb2 algorithm
 * @key: key to get the index of
 * @size: size of the hash array
 * Return: hashed index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_index = 0;

	if (key == NULL || size == 0)
		return (hashed_index);

	hashed_index = hash_djb2(key) % size;
	return (hashed_index);
}
