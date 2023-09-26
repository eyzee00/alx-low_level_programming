#include "lists.h"

/**
 * free_addrlist - frees an address list
 * @head: the address of the pointer to the first node (the head)
 * Return: (void)
 */
void free_addrlist(addrlist_t *head)
{
	addrlist_t *placeholder, *iter = head;

	while (iter != NULL)
	{
		placeholder = iter;
		iter = iter->next;
		free(placeholder);
	}
}
/**
 * add_addr - adds an address to the previously visited memory regions
 * @head: the address of the pointer to the first node
 * @address: the address to add
 * Return: (void)
 */
void add_addr(addrlist_t **head, const listint_t *address)
{
	addrlist_t *newnode = malloc(sizeof(addrlist_t));

	if (newnode == NULL)
	{
		free_addrlist(*head);
		exit(98);
	}
	newnode->address = (void *)address;
	newnode->next = *head;
	*head = newnode;
}
/**
 * print_listint_safe - prints a list while checking for infinite
 * loops cause by faulty pointers
 * @head: a pointer to the first node (the head)
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	addrlist_t *curraddr = NULL, *iter;
	size_t nodecount = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		iter = curraddr;
		while (iter != NULL)
		{
			if (iter->address == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_addrlist(curraddr);
				return (nodecount);
			}
			iter = iter->next;
		}
		nodecount++;
		printf("[%p] %d\n", (void *)head, head->n);
		add_addr(&curraddr, head);
		head = head->next;
	}
	free_addrlist(curraddr);
	return (nodecount);
}
