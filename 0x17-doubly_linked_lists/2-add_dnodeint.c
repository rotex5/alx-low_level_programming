#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - add node at beginning
 * @head: points to pointer to head
 * @n: integer to be inserted
 * Return: address of the new element or NuLL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
