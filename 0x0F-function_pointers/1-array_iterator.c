#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array of integers
 * @size: length of array
 * @action: pointer to a function to be executed on call
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL && action == NULL)
		return;

	for (; i < size; i++)
		action(*(array + i));
}
