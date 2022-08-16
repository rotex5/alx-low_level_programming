#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head of a list listint_t
 * @head: head of the list
 * Return: head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *cursor = NULL;
	int n = 0;

	/**
	 *
	if (head || *head)
	{
		cursor = *head;
		n = cursor->n;

		*head = cursor->next;

		free(cursor);
	}
	else
		return (0);
	issues with checker 6
	*/

	if (head == NULL || *head == NULL)
		return (0);

	cursor = *head;
	n = cursor->n;

	*head = cursor->next;

	free(cursor);

	return (n);
}
