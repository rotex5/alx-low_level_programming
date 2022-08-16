#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delets a new node at a given position
 * @head: head of the list
 * @index: index at which to insert
 * Return: The address of the new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cursor = *head;
	listint_t *upper_next = NULL;
	unsigned int count = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = cursor->next;
		free(cursor);
		return (1);
	}

	while (count < index - 1 && cursor != NULL)
	{
		cursor = cursor->next;
		count++;
	}

	if (*head == NULL || (*head)->next == NULL)
		return (-1);

	upper_next = cursor->next->next;
	free(cursor->next);
	cursor->next = upper_next;

	return (1);
}
