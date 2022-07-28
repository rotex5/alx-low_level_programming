#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * length_s1 - returns length of string passed
 * @str: string
 * Return: length
 */

int length_s1(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	/**printf("%d\n", len);*/
	return (len);
}

/**
 * length_s2 - returns length of string passed
 * @str: string
 * Return: length
 */

int length_s2(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	/**printf("%d\n", len);*/
	return (len);
}


/**
 * string_nconcat - function that concatenates two strings.
 * @s1: str
 * @s2: str
 * @n : n bytes of s2
 * Return: Concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len_s1, len_s2, i, j;

	len_s1 = length_s1(s1);
	len_s2 = length_s2(s2);

	if (n >= len_s2)
		n = len_s2;

	ptr = malloc(sizeof(*ptr) * (len_s1 + n + 1));
	if (ptr != NULL)
	{
	for (i = 0, j = 0; i < (len_s1 + n); i++)
	{
		if (i < len_s1)
			*(ptr + i) = *(s1 + i);
		else
			*(ptr + i) = s2[j++];
	}
	ptr[i] = '\0';
	}
	else
		return (NULL);

	return (ptr);
}
