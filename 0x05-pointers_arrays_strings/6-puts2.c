#include "main.h"

/**
* puts2 - prints every other character of a string,
* starting with the first character
* @str: pointer to the string to print
* Return: void
*/

void puts2(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (counter % 2 == 0)
		{
			_putchar(str[counter]);
		}
		counter++;
	}
	_putchar('\n');
}
