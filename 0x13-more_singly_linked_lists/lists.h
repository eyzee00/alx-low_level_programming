#ifndef __LISTS__H__
#define __LISTS__H__
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
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

/*general purpose functions*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **h, const int n);
listint_t *add_nodeint_end(listint_t **h, const int n);
void free_listint(listint_t *h);
void free_listint2(listint_t **h);

#endif
