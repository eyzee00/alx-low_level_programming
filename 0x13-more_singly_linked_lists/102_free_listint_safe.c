#include "lists.h"
/**
 * free_listint_safe - frees a list with taking faulty pointers in
 * consideration
 * @head: the address of the pointer to the first node
 * Return: the number of nodes
 */

size_t free_listint_safe(listint_t **head)
{
	listint_t *purger, *placeholder = *head, *iter;
	unsigned int nodecount = 0, i;

	if (head == NULL)
		return (0);
	if (placeholder == NULL)
		return (0);
	while (*head != NULL)
	{
		iter = placeholder;
		purger = *head;
		*head = (*head)->next;
		nodecount++;
		free(purger);
		i = 0;
		while (i < nodecount)
		{
			if (iter == *head)
			{
				*head = NULL;
				return (nodecount);
			}
			iter = iter->next;
			i++;
		}
	}
	*head = NULL;
	return (nodecount);
}
