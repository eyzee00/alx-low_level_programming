#include "lists.h"

/**
 * get_nodeint_at_index - finds the node at the given index
 * @h: a pointer to the head of the list
 * @index: the index of the wanted node
 * Return: (NULL) if the node doesn't exist, the address of
 * the node otherwise
 */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int i = 0;
	listint_t *iter = h;

	while (iter != NULL && i != index)
	{
		i++;
		iter = iter->next;
	}
	if (i != index)
		return (NULL);
	else
		return (iter);
}
