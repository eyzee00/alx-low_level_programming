#include "lists.h"

/**
 * free_listint2 - same as free_listint, only difference is that it sets
 * the head to NULL
 * @h: a pointer to the first node (the head)
 * Return: (void)
 */
void free_listint2(listint_t **h)
{
	listint_t *placeholder;

	if (*h == NULL)
		return;
	while (*h != NULL)
	{
		placeholder = *h;
		*h = (*h)->next;
		free(placeholder);
	}
	*h = NULL;
}
