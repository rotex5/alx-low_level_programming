#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inerts a new node at a given position
 * @h: head of the list
 * @idx: index at which to insert
 * @n: data (n) of the new node
 *
 * Return: The address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *cursor = *h;
	dlistint_t *upper_next = NULL;
	dlistint_t *prev_node = NULL;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		*h = new;
	}
	else
	{
		while (count < (idx - 1))
		{
			count++;
			cursor = cursor->next;
			if (cursor == NULL)
			{
				free(new);
				return (NULL);
			}
		}
		upper_next = cursor->next;
		prev_node = cursor->next->prev;
		cursor->next = new;
		new->prev = prev_node;
		new->next = upper_next;
		prev_node = new;
		return (new);
	}
	return (new);
}
