#include "lists.h"

/**
 * print_listint - prints each node of the list
 * @h: a pointer to the first node(the head)
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *iter = (listint_t *) h;
	size_t nodecount = 0;

	if (iter == NULL)
		return (0);
	while (iter != NULL)
	{
		nodecount++;
		printf("%d\n", iter->n);
		iter = iter->next;
	}
	return (nodecount);
}
