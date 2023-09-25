#include "lists.h"

/**
 * listint_len - calculates the number of nodes in a linked lists
 * @h: a pointer to the first node (the head)
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *iter = (listint_t *) h;
	size_t nodecount = 0;

	while (iter != NULL)
	{
		nodecount++;
		iter = iter->next;
	}
	return (nodecount);
}
