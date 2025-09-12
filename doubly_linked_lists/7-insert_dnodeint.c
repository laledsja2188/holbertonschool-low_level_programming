#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added (starting from 0).
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	/* If inserting at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

	/* Find the position to insert */
	while (temp != NULL && count < idx)
	{
		if (count == idx - 1)
			break;
		temp = temp->next;
		count++;
	}

	/* If inserting at the end or temp is NULL */
	if (temp == NULL)
		return (NULL);

	/* If inserting at the end */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set up the new node */
	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	/* Update the links */
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
