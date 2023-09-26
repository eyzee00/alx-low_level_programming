#include "lists.h"

/**
 * pop_listint - frees the head off the list and returns its data
 * @h: the address of the pointer to the first node
 * Return: the data contained in the head, (0) if the list is empty
 */

int pop_listint(listint_t **h)
{
	int data;
	listint_t *placeholder;

	if (*h == NULL)
		return (0);
	data = (*h)->n;
	placeholder = *h;
	*h = (*h)->next;
	free(placeholder);
	return (data);
}
