#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the first node of the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* Traverse the linked list */
	while (h != NULL)
	{
		/* If str is NULL, print [0] (nil) */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			/* Print the length of string and the string itself */
			printf("[%u] %s\n", h->len, h->str);

		/* Move to the next node */
		h = h->next;
		count++;	/* Increment node count */
	}

	/* Return the total count of nodes */
	return (count);
}

