#include <stdio.h>

/**
 * print_array - prints an array or subarray
 *
 * @arr: pointer to the array
 * @l: first index of item to print
 * @r: last index of item to print
 *
 */

void print_array(int arr[], int l, int r)
{
	printf("Searching in array: ");

	while (l <= r)
	{
		printf("%d", arr[l]);
		if (l <= r - 1)
			printf(", ");
		l++;
	}
	printf("\n");

}


/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located, Else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid;

	if (!array || !value)
		return (-1);

	mid = (l + r) / 2;

	while (l <= r)
	{
		print_array(array, l, r);

		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] != value)
			r = mid - 1;
		else
			return (mid);

		mid = (l + r) / 2;
	}

	return (-1);
}
