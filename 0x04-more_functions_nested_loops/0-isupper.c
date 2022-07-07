#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
int alpha;

alpha = 65;
while (alpha <= 90)
{
if (c == alpha)
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
