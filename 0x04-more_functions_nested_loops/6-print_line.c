#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */

void print_line(int n)
{
int i;

if (n < 0)
{
_putchar('\n');
}
else
{
i = 0;
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
}
