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
	while (iter->next != NULL)
		iter = iter->next;
	newnode->n = n;
	newnode->prev = iter;
	newnode->next = NULL;
	/**
	 * if the list is not empty, we link it with
	 * the node
	 */
	if (iter != NULL)
		iter->next = newnode;
	/**
	 * if the list is empty, we update the head pointer
	 */
	if (iter == NULL)
		*head = newnode;
	return (newnode);
}
