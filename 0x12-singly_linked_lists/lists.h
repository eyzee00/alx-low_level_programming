#ifndef __LISTS__H__
#define __LISTS__H__
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: a pointer to the next node (or the rest of the list)
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*Singly linked lists functions*/
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(const list_t **head, const char *str);

#endif
