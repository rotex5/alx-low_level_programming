#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	/**int i;**/

	len = 0;

	while (len >= 0)
	{
		dest[len] = src[len];
		if (src[len] == '\0')
			break;
		len++;
	}


	/**
	*
	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < len; i++)
	{
		dest[i] = '\0';
	}**/


	return (dest);
}
