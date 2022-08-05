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
	char *s = NULL, *empty = "(nil)", c = '\0';
	int i = 0, _i = 0;
	va_list ap;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		c = format[i++];
		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
		{
			_i = i;
			while (_i++ == i && i > 1)
				printf(", ");
			switch (c)
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (s == NULL)
						s = empty;
					printf("%s", s);
					break;
				default:
					break;
			}
		}
	}
	va_end(ap);
	printf("\n");
}
