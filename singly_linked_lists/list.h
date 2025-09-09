#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list structure
 * @str: string inside the node
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: Singly linked list
 */
typdef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
