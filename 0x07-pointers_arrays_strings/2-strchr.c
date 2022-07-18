#include "main.h"
/***#include <stddef.h>*/
/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to string
 * @c: character to check against
 * Return: returns a pointer to the character's first occurrence
 */

char *_strchr(char *s, char c)
{
	unsigned int counter;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		if (*(s + counter) == c)
		{
			return (s + counter);
		}

		counter++;
	}

	if (*(s + counter) == c)
	{
		return (s + counter);
	}

	return ('\0');
}
