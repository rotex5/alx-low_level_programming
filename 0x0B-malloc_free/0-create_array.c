#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: character
 * Return: Pointer to the array, or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter;

	if (size <= 0)
	{
		return (0);
	}
	else
	{
		array = (char *)malloc(size * sizeof(char));

		if (array == NULL)
		{
			return (0);
		}
		else
		{
			counter = 0;
			while (counter < size)
			{
				*(array + counter) = c;
				counter++;
			}
			return (array);
		}
	}
	/**
	 * array = (char *)malloc(sizeof(char) * size);

	if (array != NULL)
	{
		while (size > 0)
			array[--size] = c;
	}

	return (array);
	*/
}
