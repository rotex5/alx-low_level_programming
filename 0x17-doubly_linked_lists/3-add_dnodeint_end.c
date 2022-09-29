#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - add node at beginning
 * @head: points to pointer to head
 * @n: integer to be inserted
 * Return: address of the new element or NuLL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = NULL;
	dlistint_t *current = NULL;

	if (head == NULL)
		return (NULL);

	tail = malloc(sizeof(dlistint_t));
	if (tail == NULL)
		return (NULL);

	current = *head;

	if (current)
	{
		while (current->next)
			current = current->next;

		current->next = tail;
		tail->prev = current;
	}
	else
		*head = tail;
	tail->n = n;

	return (tail);
}
