#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _print_char - print char
 * @list : list of arguments passed to function
 */
void _print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _print_int - print integers
 * @list : list of arguments passed to function
 */
void _print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * _print_float - print float
 * @list : list of arguments passed to function
 */
void _print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _print_str - print string
 * @list : list of arguments passed to function
 */
void _print_str(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
 * print_all - print anything
 * @format: string of formats used to identify what to be printed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j;
	char *sep = "";

	user_select con[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"f", _print_float},
		{"s", _print_str},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		for (j = 0; con[j].c; j++)
		{
			if (format[i] == *con[j].c)
			{
				printf("%s", sep);
				con[j].f(list);
				sep = ", ";
			}
		}

		i++;
	}

	printf("\n");
	va_end(list);
}
