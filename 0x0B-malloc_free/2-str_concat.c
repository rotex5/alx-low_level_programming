#include "main.h"
#include <stdlib.h>

/**
 * length - returns length of string passed
 * @str: string
 * Return: length
 */

int length(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}


/**
 * _strcat - concatenates two strings
 * @src: dest
 * @dest: src
 * Return: concatenated strings
 */
char *_strcat(char *src, char *dest)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i++] = src[j];
		j++;
	}
	return (dest);
}



/**
 * str_concat - function that concatenates two strings.
 * @s1: str
 * @s2: str
 * Return: Concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	new_str = (char *)malloc((length(s1) + length(s2)) * sizeof(char) + 1);

	if (new_str != NULL)
	{
		_strcat(s1, new_str);
		_strcat(s2, new_str);
		return (new_str);
	}
	else
	{
		return (NULL);
	}
}
