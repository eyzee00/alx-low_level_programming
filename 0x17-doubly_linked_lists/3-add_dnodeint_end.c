#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: the address of the pointer to the first element
 * @n: the integer value for the newnode
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *iter = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (iter->next != NULL)
		iter = iter->next;
	newnode->prev = iter;
	if (iter != NULL)
		iter->next = newnode;
	return (newnode);
}
