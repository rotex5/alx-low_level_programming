#include "main.h"
#include "stdlib.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total;


	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr != NULL)
	{
		i = 0;
		while (i < total)
		{
			*(ptr + i) = 0;
			i++;
		}
	}
	else
		return (NULL);

	return (ptr);
}
