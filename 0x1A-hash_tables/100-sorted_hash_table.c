#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the array
 * Return: if an error occurs - NULL
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shashtable = NULL;
	unsigned long int i;

	shashtable = malloc(sizeof(shash_table_t));
	if (shashtable == NULL)
		return (NULL);

	shashtable->size = size;
	shashtable->array = malloc(sizeof(shash_node_t *) * size);
	if (shashtable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		shashtable->array[i] = NULL;
	shashtable->shead = NULL;
	shashtable->stail = NULL;

	return (shashtable);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newnode = NULL, *iterator = NULL;
	char *value_copy = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	iterator = ht->shead;
	while (iterator)
	{
		if (strcmp(iterator->key, key) == 0)
		{
			free(iterator->value);
			iterator->value = value_copy;
			return (1);
		}
		iterator = iterator->snext;
	}
	newnode = malloc(sizeof(shash_node_t));
	if (newnode == NULL)
	{
		free(value_copy);
		return (0);
	}
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(value_copy);
		free(newnode);
		return (0);
	}
	newnode->value = value_copy;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	if (ht->shead == NULL)
	{
		newnode->sprev = NULL;
		newnode->snext = NULL;
		ht->shead = newnode;
		ht->stail = newnode;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newnode->sprev = NULL;
		newnode->snext = ht->shead;
		ht->shead->sprev = newnode;
		ht->shead = newnode;
	}
	else
	{
		iterator = ht->shead;
		while (iterator->snext != NULL && strcmp(iterator->snext->key, key) < 0)
			iterator = iterator->snext;
		newnode->sprev = iterator;
		newnode->snext = iterator->snext;
		if (iterator->snext == NULL)
			ht->stail = newnode;
		else
			iterator->snext->sprev = newnode;
		iterator->snext = newnode;
	}
	return (1);
}

/**
 * shash_table_get - gets the value associated with a key
 * @ht: pointer to the hash table
 * @key: the key
 * Return: the value associated with the element
 * or NULL if key couldn't be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *iterator = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	iterator = ht->shead;
	while (iterator != NULL)
	{
		if (strcmp(iterator->key, key) == 0)
			return (iterator->value);
		iterator = iterator->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: void
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *iterator = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		iterator = ht->array[i];
		while (iterator != NULL)
		{
			printf("'%s': '%s'", iterator->key, iterator->value);
			if (iterator->next != NULL)
				printf(", ");
			iterator = iterator->next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the sorted hash table
 * Return: void
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *iterator = NULL;
	shash_node_t *placeholder = NULL;
	unsigned long int i = 0;

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
/**
 * shash_table_print_rev - prints a sorted hash table
 * @ht: pointer to the sorted hash table
 * Return: void
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *iterator;

	if (ht == NULL)
		return;
	iterator = ht->stail;
	printf("{");
	while (iterator != NULL)
	{
		printf("'%s': '%s'", iterator->key, iterator->value);
		iterator = iterator->sprev;
		if (iterator != NULL)
			printf(", ");
	}
	printf("}\n");
}
