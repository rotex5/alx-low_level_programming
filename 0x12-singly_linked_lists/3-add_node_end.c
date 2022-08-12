#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of list_t list
 * @head: points to pointer to head
 * @str: string to be copied to new node
 * Return: Address to new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail = NULL;
	unsigned int i = 0;
	list_t *current = NULL;

	if (head == NULL)
		return (NULL);

	tail = malloc(sizeof(list_t));

	if (tail == NULL)
		return (NULL);

	current = *head;

	if (current)
	{
		while (current->next)
			current = current->next;

		current->next = tail;
	}
	else
		*head = tail;

	tail->str = NULL;
	tail->len = 0;
	tail->next = NULL;

	if (str != NULL)
	{
		tail->str = strdup(str);
		i = 0;
		while (str[i++])
			;
		tail->len = i - 1;
	}
	return (tail);
}
