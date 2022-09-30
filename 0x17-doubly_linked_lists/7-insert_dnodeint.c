#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inerts a new node at a given position
 * @h: head of the list
 * @idx: index at which to insert
 * @n: data (n) of the new node
 * Return: The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new = NULL;
	dlistint_t *cursor = *h, *rep;

	if (idx == 0)
		add_dnodeint(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new || !h)
			return (NULL);
		new->n = n;

		while (count < (idx - 1))
		{
			rep = cursor, cursor = cursor->next;
			if (cursor == NULL)
			{
				free(new);
				return (NULL);
			}
			count++;
		}
		if (cursor->next == NULL)
		{
			cursor->next = new, new->prev = cursor;
			new->next = NULL;
			return (new);
		}
		new->next = cursor->next, new->prev = cursor;
		rep = cursor->next;
		cursor->next = new, rep->prev = new;
		return (new);
	}
	return (NULL);
}
