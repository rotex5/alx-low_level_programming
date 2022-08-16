#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the begining of a listint_t list
 * @head: head of the list (a pointer)
 * @n: value of the node
 *
 * Return: The address of the new element, or NULL if it failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = NULL;

	if (head == NULL)
		return (NULL);

	new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;

	*head = new_head;

	return (*head);
}
