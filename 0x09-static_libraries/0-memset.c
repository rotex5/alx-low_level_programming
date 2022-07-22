#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: string pointer
 * @b: constant byte
 * @n: number of bytes required in memory
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (counter < n)
	{
		*(s + counter) = b;
		counter++;
	}
	return (s);
}
