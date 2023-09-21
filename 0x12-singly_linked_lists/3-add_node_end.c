#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a node to the end pf the list
 * @head: the address of the list
 * @str: the data contained in the node
 * Return: the address of the new node added, (NULL)
 * if allocation fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *iter = *head;

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (iter == NULL)
	{
		*head = node;
		return (node);
	}
	while (iter->next != NULL)
		iter = iter->next;
	iter->next = node;
	return (node);
}
