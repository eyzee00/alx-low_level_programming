#include "lists.h"

/**
 * sum_listint - sums the data contained in the given list
 * @h: a pointer to the head of the list
 * Return: (0) if the list is empty, the sum of its elements
 * otherwise
 */
int sum_listint(listint_t *h)
{
	int sum = 0;
	listint_t *iter = h;

	if (iter == NULL)
		return (0);
	while (iter != NULL)
	{
		sum = sum + iter->n;
		iter = iter->next;
	}
	return (sum);
}
