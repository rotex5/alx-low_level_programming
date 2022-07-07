#include "main.h"

/**
 * print_diagonal - prints a diagonal line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */

void print_diagonal(int n)
{
int i;
int j;

i = 0;
while (i < n)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
if (i < (n - 1))
{
_putchar('\n');
}

i++;
}
_putchar('\n');
}
