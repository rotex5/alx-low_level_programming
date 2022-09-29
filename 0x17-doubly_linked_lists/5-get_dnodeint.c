#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t
 * @head: head of the list
 * @index: index of the node
 * Return: the node at index if exits, or NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cursor = NULL;
	unsigned int count = 0;

	cursor = head;

	if (cursor == NULL)
		return (NULL);

	while (cursor)
	{
		if (count == index)
			return (cursor);
		count++;
		cursor = cursor->next;
	}
	return (NULL);
}
