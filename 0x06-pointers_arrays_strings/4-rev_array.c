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

	int *start_c, *end_c, c;
	int i;

	start_c = a;
	end_c = a;

	for (i = 0; i < n - 1; i++)
	{
		end_c++;
	}

	for (i = 0; i < n / 2; i++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}
	/**
	 * works but failed checker 3 checker edge
	 * cases
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
	*/
}
