#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unisnged int
 * @b: binary number string
 * Return: Equvalent number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	unsigned int total, num;
	int exp_i = 0;

	if (b == NULL)
		return (0);

	for (; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	total = 0;
	num = 0;

	while (i-- > 0)
	{
		num = b[i] - '0'; /* convert to digit */
		exp_i = j++;  /* accounting for exponate*/
		while (exp_i--)
			num *= 2;  /* 2 * x ;cal exp*/
		total += num;
	}

	return (total);

}
