#include "lists.h"
/**
 * free_list - frees the whole list
 * @head: the address of the list
 * Return: (void)
 */
void free_list(list_t *head)
{
	list_t *iter;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		iter = head;
		head = head->next;
		free(iter->str);
		free(iter);
	}
	head = NULL;
}

