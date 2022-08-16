#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: points to the head of listint_t
 * Return: pointer to the new list head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
