#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: A pointer to an array
 * @n: the number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{

	int counter;

	counter = n - 1;
	while (counter >= 0)
	{
		printf("%d", a[counter]);

		if (counter >= 1)
		{
			printf(", ");
		}
		counter--;
	}
	printf("\n");
}
