#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to source string
 * @needle: pointer to substring
 * Return: :pointer to the beginning of the located substring,
 * or NULL if the subsctring is not found
 */

char *_strstr(char *haystack, char *needle)
{
int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);

				x++;

			} while (haystack[x] == needle[x]);
		}

		haystack++;
	}

	return (NULL);
}
