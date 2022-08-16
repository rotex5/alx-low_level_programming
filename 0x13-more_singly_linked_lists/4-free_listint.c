#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t
 * @head: head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *cursor = NULL;

	while (head != NULL)
	{
		cursor = head->next;
		free(head);

		head = cursor;
	}
}
