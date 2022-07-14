#include "main.h"

/**
 * _strncat - concatenate two strings
 * @src : A pointer to source string
 * @dest : A pointer to destination to be changed
 * @n : number of bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest, counter;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		dest[len_dest + counter] = src[counter];
		counter++;
	}
	dest[len_dest + counter] = '\0';

	return (dest);
}
