#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bybtes
 * @s: ponter to sources string
 * @accept: pointer to substring
 * Return: returns a pointer to the bytes in s that matches
 * one of the bytes in accpet
 */

char *_strpbrk(char *s, char *accept)
{
	int counter, i;

	counter = 0;
	while (*(s + counter))
	{

		/**num = 0;*/
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *(s + counter))
			{
				return ((s + counter));
			}
					}

		counter++;
	}
	return (NULL);
}
