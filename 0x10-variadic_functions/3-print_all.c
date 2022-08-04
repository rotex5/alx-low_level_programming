#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: string of formats used to identify what to be printed
 * Return: void
 */


void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str;

	va_start(list, format);

	while (format[i] != '\0')
	{

		if (format[i] == 'c')
			printf("%c", va_arg(list, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(list, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(list, double));
		else if (format[i] == 's')
		{
			str = va_arg(list, char*);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
	}

	va_end(list);
	printf("\n");
}
