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
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}



/**
 * CHECKER IS LEGIT MESSY WITH ME, I SWEAR IT RAN ON MY MACHINE
 * NA ME LOOSE GUARD CHANGE CODE SHAA
 * COMMENTING IMPLEMTATION USING STRUCTS TO SUBSITUTE
 * FOR SWITCH. CNT FIGURE OUT WHATSUP
 */

/**
 * _print_char - print char
 * @list : list of arguments passed to function
 */
/**
void _print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
*/
/**
 * _print_int - print integers
 * @list : list of arguments passed to function
 */
/**
void _print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
*/
/**
 * _print_float - print float
 * @list : list of arguments passed to function
 */
/**
void _print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
*/
/**
 * _print_str - print string
 * @list : list of arguments passed to function
 */
/**
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
*/

/**
 * print_all - print anything
 * @format: string of formats used to identify what to be printed
 * Return: void
 */
/**
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
*/

