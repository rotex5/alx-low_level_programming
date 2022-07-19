#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum pf two diagonals of
 * a square matrix of integers
 * @a: pointer to array
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size)
	{
		sum1 += *(a + i);
		a += size;

		i++;
	}

	a -= size;

	i = 0;
	while (i < size)
	{
		sum2 += *(a + i);
		a -= size;

		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
