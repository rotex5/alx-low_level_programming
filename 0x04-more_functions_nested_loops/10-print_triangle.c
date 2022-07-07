#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */

void print_triangle(int size)
{
int i;
int j;

i = 0;
while (i < size)
{

for (j = 1; j < (size - i); j++)
{
_putchar(' ');
}
for (j--; j < size; j++)
{
_putchar(35);
}
if (i < (size - 1))
{
_putchar('\n');
}

i++;
}

_putchar('\n');
}
