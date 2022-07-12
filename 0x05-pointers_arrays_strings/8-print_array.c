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
		if (counter == n - 1)
		{
			printf("%d\n", a[counter]);
		}
		else
		{
			printf("%d, ", a[counter]);
		}
		counter++;
	}
}
