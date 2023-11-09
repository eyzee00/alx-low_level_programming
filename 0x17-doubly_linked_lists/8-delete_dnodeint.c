#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at the given index
 * @head: the address of the pointer to the first element
 * @index: index of the element to delete
 * Return: (1) in case of success, (-1) otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iter = *head, *placeholder = NULL;

	if (iter == NULL)
		return (-1);
	if (index == 0)
	{
		placeholder = iter;
		*head = iter->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(placeholder);
		return (1);
	}
	while (index != 1)
	{
		iter = iter->next;
		index--;
		if (iter == NULL)
			return (-1);
	}
	if (iter->next == NULL)
	{
		placeholder = iter->next;
		iter->next = NULL;
		free(placeholder);
		return (1);
	}
	iter = iter->next;
	placeholder = iter;
	iter->prev->next = iter->next;
	iter->next->prev = iter->prev;
	free(placeholder);
	return (1);
}
