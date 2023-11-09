#include "lists.h"
/**
 * sum_dlistint - calculates the sum of (n)integers in the list
 * @head: the address of the first element
 * Return: the sum of all (n) integers
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *iter = head;
	int sum = 0;

	while (iter != NULL)
	{
		sum = sum + iter->n;
		iter = iter->next;
	}
	return (sum);
}
