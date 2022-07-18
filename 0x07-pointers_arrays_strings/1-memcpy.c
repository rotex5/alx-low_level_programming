#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to destination array
 * @src: pointer to source array
 * @n: number of bytes from area src to dest
 * Return: returns a copy of scr in dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;

	/**
	 *
	if (counter < n)
	{
		*(dest + counter) = *(src + counter);
		counter++;
		_memcpy(dest, src, n);
	}
	causes fault segmentation after first print..to be revisited
	*/

	while (counter < n)
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}

	return (dest);
}
