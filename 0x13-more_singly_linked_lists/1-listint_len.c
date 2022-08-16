#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list_t list
 * @h: head/begining of list list_t
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
