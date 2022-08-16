#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: head of the list
 * @index: index of the node
 * Return: the node at index if exits, or NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int count = 0;

	cursor = head;

	if (cursor == NULL)
		return (NULL);
	/**
	 *
	while (cursor)
	{
		cursor =  cursor->next;
		count++;
		if (count == index)
		{
			break;
		}

	}
	return (cursor);
	Issue with checker 9 and 10
	*/

	while (cursor)
	{
		if (count == index)
			return (cursor);
		count++;
		cursor = cursor->next;
	}
	return (NULL);
}
