#ifndef __LISTS__H__
#define __LISTS__H__
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
/**
 * struct listint_s - a linked list struct containing an integer as data
 * @n: an integer
 * @next: a pointer to the next element of the list (or the rest of the list)
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
/**
 * struct addrlist_s - a linked list containing an address as data
 * @address: a void address
 * @next: a pointer to the next element in the list (or the rest of the list)
 */
typedef struct addrlist_s
{
	void *address;
	struct addrlist_s *next;
} addrlist_t;

/*general purpose functions*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **h, const int n);
listint_t *add_nodeint_end(listint_t **h, const int n);
void free_listint(listint_t *h);
void free_listint2(listint_t **h);
int pop_listint(listint_t **h);
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index);
int sum_listint(listint_t *h);
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
void add_addr(addrlist_t **head, void *address);
void free_addrlist(addrlist_t **head);

#endif
