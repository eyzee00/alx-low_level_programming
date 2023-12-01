#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *iterator = NULL;
	hash_node_t *placeholder = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		iterator = ht->array[i];
		while (iterator != NULL)
		{
			placeholder = iterator;
			iterator = iterator->next;
			free(placeholder->key);
			free(placeholder->value);
			free(placeholder);
		}
	}
	free(ht->array);
	free(ht);
}
