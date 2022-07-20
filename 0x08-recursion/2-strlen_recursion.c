#include "main.h"

/**
 * _strlen_recursion - print a string
 * @s:string inputed
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	unsigned int counter = 0;

	if (*(s + counter) != '\0')
	{
		counter++;
		counter += _strlen_recursion(s + counter);
	}
	return (counter);
}
