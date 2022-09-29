#include "lists.h"

/**
 * sum_dlistint - sum of all the data of a listint_t linked list
 * @head: head of the list
 * Return: the sumation of all data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cursor = NULL;
	int sum = 0;

	cursor = head;

	while (cursor)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
