#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at the given index
 * @index: where to insert the node
 * @n: the value contained within the node
 * @h: the address of the pointer to the first element
 * Return: the address of the new node, (NULL) if allocation
 * fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iter = *h, *newnode = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		iter = iter->next;
		i++;
		if (iter == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = iter;
	newnode->next = iter->next;
	iter->next->prev = newnode;
	iter->next = newnode;
	return (newnode);
}
