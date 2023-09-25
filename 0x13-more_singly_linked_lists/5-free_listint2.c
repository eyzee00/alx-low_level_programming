#include "lists.h"

/**
 * free_listint2 - same as free_listint, only difference is that it sets
 * the head to NULL
 * @h: a pointer to the first node (the head)
 * Return: (void)
 */
void free_listint2(listint_t **h)
{
	listint_t *placeholder, *iter;

	if (h == NULL)
		return;
	iter = *h;
	while (iter != NULL)
	{
		placeholder = iter;
		iter = iter->next;
		free(placeholder);
	}
	*h = NULL;
}
