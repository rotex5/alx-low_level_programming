#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of parameters passed
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int total = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (; i < n; i++)
		total += va_arg(list, int);

	va_end(list);

	return (total);
}
