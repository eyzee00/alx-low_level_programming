#include "lists.h"
#include <stddef.h>
/**
 * print_dlistint - prints all the elements of a doubly
 * linked list
 * @head: points to the first element of the list
 * Return: length of the list
 */
size_t print_dlistint(const dlistint_t *head)
{
	dlistint_t *iter = (dlistint_t *) head;
	size_t count = 0;

	if (iter == NULL)
		return (0);
	while (iter != NULL)
	{
		printf("%d\n", iter->n);
		count++;
		iter = iter->next;
	}
	return (count);
}
