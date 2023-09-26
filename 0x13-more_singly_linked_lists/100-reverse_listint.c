#include "lists.h"

/**
 * reverse_listint - reverses the order of the lists using pointers
 * @head: address of the pointer to the first node (the head)
 * Return: a pointer to the new head of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *placeholder1 = *head, *placeholder2;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (placeholder1->next == NULL)
		return (placeholder1);
	if (placeholder1)
	{
		placeholder2 = placeholder1->next;
		placeholder1->next = NULL;
	}
	while (placeholder2 != NULL)
	{
		placeholder1 = placeholder2;
		placeholder2 = placeholder2->next;
		placeholder1->next = *head;
		*head = placeholder1;
	}
	return (*head);
}
