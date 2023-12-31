#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node before the head of the list
 * @head: the address of the list in the stack memory
 * @str: the string to duplicate in the new element
 * Return: The address of the new element, (NULL) if
 * something fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;
	*head = node;
	return (node);
}
