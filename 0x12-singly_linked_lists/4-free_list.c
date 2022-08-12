#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list_t list
 * @head: pointers to head of list_t
 */

void free_list(list_t *head)
{
	list_t *current;

	current = NULL;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);

		head = current;
	}
}
