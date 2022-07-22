#include "main.h"

/**
 * _strncpy - copies strings
 * @src : A pointer to source string
 * @dest : A pointer to destination to be changed
 * @n : number of bytes from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}

	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}

	return (dest);
}
