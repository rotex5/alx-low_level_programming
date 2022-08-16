#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: head/begining
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *cursor = NULL;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		cursor = (*head)->next;
		free(*head);
		*head = cursor;
	}
	*head = NULL;
}
