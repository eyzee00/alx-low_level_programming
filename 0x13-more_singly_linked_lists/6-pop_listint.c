#include "lists.h"

/**
 * pop_listint - frees the head off the list and returns its data
 * @h: a pointer to the first node
 * Return: the data contained in the head, (0) if the list is empty
 */

int pop_listint(listint_t **h)
{
	int data;

	if (h == NULL)
		return (0);
	data = (*h)->n;
	*h = (*h)->next;
	free(*h);
	return (data);
}
