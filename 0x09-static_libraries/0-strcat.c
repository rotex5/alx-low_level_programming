#include "main.h"

/**
 *_strcat - function that concatenates two strings.
 *@src: pointer to source string
 *@dest: pointer to destination to be change
 *Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int len_dest, counter;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[len_dest + counter] = src[counter];
		counter++;
	}
	/**dest[len_dest + counter] = '\0';**/

	return (dest);
}
