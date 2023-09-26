#include "lists.h"

/**
 * add_nodeint_end - creates and adds a node to the end of the list
 * @n: the data that should be inside the new node
 * @h: the address of the pointer to the first element of the list
 * Return: the address of the new node, (NULL) if allocation fails
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *current;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*h == NULL)
	{
		*h = newnode;
		return (newnode);
	}
	current = *h;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newnode;
	return (newnode);
}
