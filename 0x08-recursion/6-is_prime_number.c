#include "main.h"

/**
 * is_prime_number - returns 1 if a number is a prime number
 * otherwise return o
 * @n: number inputed for evalution
 * Return: result
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (chkpr(n, 2));
}


/**
 * chkpr - receives n as first param to do recursion
 *
 * @n: number inputed pass from is_prime_number
 * @num: int
 * Return: result
 */

int chkpr(int n, int num)
{
	if (n % num == 0 && num != n)
	{
		return (0);
	}
	else if (n % num != 0)
	{
		return (chkpr(n, num + 1));
	}
	else
	{
		return (1);
	}
}

