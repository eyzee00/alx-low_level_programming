#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *iterator = NULL;
	unsigned long int i = 0;
	char *value = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		iterator = ht->array[i];
		while (iterator != NULL)
		{
			value = iterator->value;
			printf("'%s': '%s'", iterator->key, value);
			iterator = iterator->next;
			if (iterator != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
