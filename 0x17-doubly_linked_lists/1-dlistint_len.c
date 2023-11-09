#include "lists.h"
/**
 * dlistint_len - returns the length of a doubly linked list
 * @head: points to the first element of the list
 * Return: the length of the list
 */
size_t dlistint_len(const dlistint_t *head)
{
	dlistint_t *iter = (dlistint_t *) head;
	size_t length = 0;

	if (iter == NULL)
		return (0);
	while (iter != NULL)
	{
		length++;
		iter = iter->next;
	}
	return (length);
}
