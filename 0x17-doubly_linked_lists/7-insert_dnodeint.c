#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 *
 * @h: the pointer to the first node of the list
 * @idx: the index to get to
 * @n: the data to populate data field
 * Return: The address of the newly created node.
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t)), *cursor = *h, *rep;

	if (!new || !h)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	else
	{
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
}
