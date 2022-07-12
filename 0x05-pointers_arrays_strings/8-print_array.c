#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: pointer to array
* @n: number of integers in array
* Return: void
*/

void print_array(int *a, int n)
{
	int counter;

	counter = 0;
	while (counter < n)
	{
		printf("%d", a[counter]);
		if (counter != (n - 1))
		{
			printf(", ");
		}
		counter++;
	}
	printf("\n");
}
