#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: comma seperator
 * @n: number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str;

	va_start(list, n);


	for (; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/**
		 * printf("%s", va_arg(list, char *));
		 */
	}

	va_end(list);

	printf("\n");
}
