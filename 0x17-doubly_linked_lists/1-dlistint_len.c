#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements
 * @h: pointer to head
 * Return: number nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
