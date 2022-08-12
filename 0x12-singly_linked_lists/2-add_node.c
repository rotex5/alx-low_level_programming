#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node at the beginning of list_t list
 * @head: points to pointer to head
 * @str: string to be cpoied to new_head, needs to be duplicated
 * Return: addres to new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);

	new_head->str = NULL;
	new_head->next = *head;
	new_head->len = 0;

	*head = new_head;

	if (str != NULL)
	{
		new_head->str = strdup(str);
		for (; str[i]; i++)
			;
		new_head->len = i - 1;
	}

	return (*head);
}
