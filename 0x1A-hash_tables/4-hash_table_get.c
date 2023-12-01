#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: the key
 * Return: the value associated with the element, or NULL
 * if the key could not be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *iterator = NULL;
	char *value = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	iterator = ht->array[index];
	while (iterator != NULL)
	{
		if (strcmp(iterator->key, key) == 0)
		{
			value = iterator->value;
			break;
		}
		iterator = iterator->next;
	}
	return (value);
}
