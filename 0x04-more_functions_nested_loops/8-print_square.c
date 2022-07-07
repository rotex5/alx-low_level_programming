#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */

void print_square(int size)
{
int a;
int i;

i = 0;
while (i < size)
{
a = 0;
while (a < size)
{
_putchar(35);
a++;
}
if (i != size - 1)
{
_putchar('\n');
}
i++;
}
_putchar('\n');
}
