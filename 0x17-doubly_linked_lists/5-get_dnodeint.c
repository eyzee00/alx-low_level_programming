#include "lists.h"
/**
 * get_dnodeint_at_index - gets the address of the node at the
 * given index
 * @index: the node to get
 * @head: the address of the first node
 * Return: (NULL) if index is out of range, the address of the
 * desired node otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *iter = head;
	unsigned int i = 0;

	if (index < 0 || head == NULL)
		return (NULL);
	while (iter != NULL && i < index)
	{
		iter = iter->next;
		i++;
	}
	return (iter);
}
