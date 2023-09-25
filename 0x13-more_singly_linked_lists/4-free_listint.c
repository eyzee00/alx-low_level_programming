#include "lists.h"

/**
 * free_listint - frees the memory allocated previously for the given list
 * @h: a pointer to the head of the list (the first node)
 * Return: (void)
 */
void free_listint(listint_t *h)
{
	listint_t *placeholder;

	if (h == NULL)
		return;
	while (h != NULL)
	{
		placeholder = h;
		h = h->next;
		free(placeholder);
	}
}
