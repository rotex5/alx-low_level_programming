#include "main.h"

/**
 * chksqrt - checker for square root of an integer
 * @n: number inputed for evaluation
 * @num: number to be checked
 *
 * Return: result
 */
int chksqrt(int n, int num)
{

	if (num * num == n)
		return (num);
	else if (num * num > n)
		return (-1);
	return (chksqrt(n, num + 1));

}

/**
 * _sqrt_recursion - a function that returns the square root of an integer
 * @n: number to evaluate
 * Return: result
 */

int _sqrt_recursion(int n)
{

	return (chksqrt(n, 1));

}
