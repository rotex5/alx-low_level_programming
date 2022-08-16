#include "lists.h"

/**
 * sum_listint - sum of all the data of a listint_t linked list
 * @head: head of the list
 * Return: the sumation of all data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cursor = NULL;

	cursor = head;

	while (cursor)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
