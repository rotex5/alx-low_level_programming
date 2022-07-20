#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: int inputed
 * Return: returns -1 if n  is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
