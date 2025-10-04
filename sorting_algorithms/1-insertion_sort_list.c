#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using the Insertion sort algorithm
 *
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current->next;
		prev_node = current->prev;

		/* Move current node backwards while it's smaller than previous nodes */
		while (prev_node != NULL && prev_node->n > current->n)
		{
			/* Remove current from its position */
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->prev->next = current->next;

			/* Insert current before prev_node */
			current->prev = prev_node->prev;
			current->next = prev_node;

			if (prev_node->prev != NULL)
				prev_node->prev->next = current;
			else
				*list = current; /* Update head if current becomes first */

			prev_node->prev = current;

			/* Print the list after each swap */
			print_list(*list);

			/* Update prev_node for next iteration */
			prev_node = current->prev;
		}

		current = temp;
	}
}