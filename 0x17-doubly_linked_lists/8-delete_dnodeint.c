#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * @h: pointer to head
 * Return: number nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * delete_dnodeint_at_index - deletes a node of a doubly linked list
 * @head: points to head of list
 * @index:  index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, length;
	dlistint_t *cursor = *head, *previous, *forward;

	length = dlistint_len(*head);

	if (head == NULL || index >= length)
		return (-1);

	if (index == 0)
	{
		forward = cursor->next;
		if (forward)
			forward->prev = NULL;

		free(cursor);
		*head = forward;
		return (1);
	}

	while (i < index)
	{
		previous = cursor;
		cursor = cursor->next;
		forward = cursor->next;
		i++;
	}
	previous->next = forward;
	if (forward != NULL)
		forward->prev = previous;
	free(cursor);
	return (1);
}
