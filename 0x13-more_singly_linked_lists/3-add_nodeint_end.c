#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of the node (pointer)
 * @n: value to add
 *
 * Return: The address of thenew elements, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *cursor = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	cursor = *head;

	if (cursor)
	{

		while (cursor->next)
			cursor = cursor->next;

		cursor->next = new_node;
	}
	else
		*head = new_node;

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
