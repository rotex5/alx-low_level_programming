#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int counter = 0;
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + counter) == alphabet[i])
			{
				*(s + counter) = rot13[i];
				break;
			}
		}

		counter++;
	}
	return (s);
}
