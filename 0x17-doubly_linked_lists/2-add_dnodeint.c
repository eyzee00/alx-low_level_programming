#include "lists.h"
/**
 * add_dnodeint - adds a node a the beginning of the linked list
 * @head: the address of the pointer to the first element
 * Return: the address of the created element, NULL if allocation fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
