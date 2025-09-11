#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  /* For size_t */

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the first node of the list
 *
 * Description: This function traverses the list, printing the string
 * in each node. If the string is NULL, it prints [0] (nil) instead.
 * It also prints the length of the string before printing the string.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h);

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list_t list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head);

#endif /* LISTS_H */

