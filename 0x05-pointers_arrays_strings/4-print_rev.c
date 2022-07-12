#include "main.h"
/**#include <stdio.h>**/

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int len;
	int counter;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	/**printf("%d", len);**/

	for (counter = (len - 1); counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
