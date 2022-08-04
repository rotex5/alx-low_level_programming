#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: a separator
 * @n: number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);


	for (; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(list, int));
	}

	va_end(list);

	printf("\n");

}
