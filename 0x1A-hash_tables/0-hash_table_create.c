#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: if an error occurs - NULL
 * Otherwise - a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned long int i = 0;

/*Allocate memory for the hash table*/
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
/*Initialize the hash table*/
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
		return (NULL);
/*Initialize each element of the array field to NULL*/
	while (i < size)
	{
		hashtable->array[i] = NULL;
		i++;
	}
	return (hashtable);
}
