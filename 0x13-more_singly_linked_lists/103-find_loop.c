#include "lists.h"
/**
 * find_listint_loop - finds if the lists contains pointers to previous
 * nodes instead of the next one (an inner loop)
 * @head: a pointer to the first node in the list
 * Return: the node where the loop starts, (NULL) if no loop exists
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *next = head;

	if (next == NULL)
		return (NULL);
	while (next != NULL)
	{
		current = next;
		next = next->next;
		if (next > current)
			return (next);
	}
	return (NULL);
}
