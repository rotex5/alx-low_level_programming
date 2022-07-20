#include "main.h"

/**
 * _puts_recursion - print a string, followed by a new line
 * @s:string inputed
 * Return:void
 */

void _puts_recursion(char *s)
{
	int counter = 0;

	if (*(s + counter) != '\0')
	{
		_putchar(*(s + counter));
		counter++;
		_puts_recursion(s + counter);
	}
	else
	{
		_putchar('\n');
	}


}
