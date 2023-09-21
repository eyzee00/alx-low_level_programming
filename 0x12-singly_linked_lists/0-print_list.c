#include "lists.h"
#include <stddef.h>
/**
 * print_list - prints list elements starting from the head
 * @h: the head of the list (the first node)
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	list_t *iter = (list_t *) h;

	if (iter == NULL)
		return (0);
	while (iter != NULL)
	{
		++size;
		if (iter->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", iter->len, iter->str);
		iter = iter->next;
	}
	return (size);
}
