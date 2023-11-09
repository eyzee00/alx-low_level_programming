#include "lists.h"
/**
 * free_dlistint - frees the whole list
 * @head: the address of the first element
 * Return: (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iter = head, *placeholder = NULL;

	if (head == NULL)
		return;
	while (iter != NULL)
	{
		placeholder = iter;
		iter = iter->next;
		free(placeholder);
	}
}
