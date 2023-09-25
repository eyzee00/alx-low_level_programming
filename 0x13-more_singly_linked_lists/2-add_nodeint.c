#include "lists.h"

/**
 * add_nodeint - creates and adds a new node to the beginning of the list
 * @h: a pointer to the first node (the head)
 * @n: the data that should be contained inside the new node
 * Return: the address of the new node, (NULL) if operation fails
 */
listint_t *add_nodeint(const listint_t **h, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;
	if (*h == NULL)
	{
		newnode->next = NULL;
		*h = newnode;
		return (newnode);
	}
	else
	{
		newnode->next = (listint_t *) *h;
		*h = newnode;
		return (newnode);
	}
}
