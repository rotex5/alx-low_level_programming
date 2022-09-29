#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free list_t list
 * @head: pointers to head of dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head)
	{
		head->prev = NULL;
		current = head->next;
		free(head);

		head = current;
	}
}
