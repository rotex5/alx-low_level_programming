#include "main.h"

/**
 * _isdigit - Checks for a digit(0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 if c is digit, 0 otherwise.
 */

int _isdigit(int c)
{
int num;

num = 48;
while (num <= 57)
{
if (c == num)
{
return (1);
}
else
{
return (0);
}
}
return (0);
}
