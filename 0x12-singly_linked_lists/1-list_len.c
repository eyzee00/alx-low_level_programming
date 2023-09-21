#include "lists.h"
/**
 * list_len - calculates the length of a linked lists
 * @h: the head of the list
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;
	list_t *iter = (list_t *) h;

	while (iter != NULL)
	{
		++size;
		iter = iter->next;
	}
	return (size);
}
