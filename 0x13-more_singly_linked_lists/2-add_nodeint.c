#include "lists.h"

/**
 * add_nodeint - creates and adds a new node to the beginning of the list
 * @h: the address of the pointer to the first node (the head)
 * @n: the data that should be contained inside the new node
 * Return: the address of the new node, (NULL) if operation fails
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*h == NULL)
	{
		newnode->next = NULL;
		*h = newnode;
		return (newnode);
	}
	else
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
}
