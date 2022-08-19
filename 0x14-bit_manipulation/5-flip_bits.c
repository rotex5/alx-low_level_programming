#include "main.h"

/**
 * flip_bits - returns the number of bits needed to be flipped
 *@n: the base number
 *@m: the number to convert to
 * Return: the number of changes in bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int i;

	result = n ^ m;
	i = 0;

	while (result)
	{
		i += result & 1;
		result >>= 1;
	}

	return (i);
}
