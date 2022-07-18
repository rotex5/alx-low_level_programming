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
	char *current = s;

	counter = 0;
	while (*(current + counter) != '\0')
	{
		if (*(current + counter) == c)
		{
			return (s + counter);
		}

		counter++;
	}

	if (*(current + counter) == c)
	{
		return (current + counter);
	}

	return (s);
}
