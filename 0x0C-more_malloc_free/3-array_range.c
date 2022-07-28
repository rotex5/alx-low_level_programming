#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int-first number
 * @max: int-last number
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int len, i;


	if (min > max)
		return (NULL);
	len = max - min + 1;

	array = malloc(sizeof(*array) * len);
	if (array != NULL)
	{
		for (i = 0; i < len; i++, min++)
			*(array + i) = min;
	}
	else
		return (NULL);
	return (array);

}
