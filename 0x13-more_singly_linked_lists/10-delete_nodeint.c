#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: the address of the pointer to the first node
 * @index: the position of the node to delete
 * Return: (1) if successful, (-1) if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curnode = *head;
	listint_t *prenode;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (curnode == NULL)
		return (-1);
	if (index == 0)
	{
		*head = curnode->next;
		free(curnode);
		return (1);
	}
	while (curnode != NULL && i != index)
	{
		i++;
		prenode = curnode;
		curnode = curnode->next;
	}
	if (i != index)
		return (-1);
	prenode->next = curnode->next;
	free(curnode);
	return (1);
}
