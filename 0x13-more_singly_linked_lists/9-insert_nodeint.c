#include "lists.h"

/**
 * insert_nodeint_at_index - creates and inserts a new node at the given index
 * @h: address of the pointer to the first node (the head)
 * @idx: where to insert the new node
 * @n: the data that sould be contained by the new node
 * Return: (NULL) if insert can't be done at the given position,
 * (NULL) otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	listint_t *newnode, *iter = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (iter == NULL && idx != 0)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (iter != NULL && idx == 0)
	{
		newnode->next = iter;
		*h = newnode;
		return (newnode);
	}
	while (iter != NULL && i != idx)
	{
		i++;
		iter = iter->next;
	}
	if (i != idx)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = iter->next;
	iter->next = newnode;
	return (newnode);
}
