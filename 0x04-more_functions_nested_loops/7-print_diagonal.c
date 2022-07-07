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

if (n <= 0)
{
_putchar('\n');
}

i = 0;
while (i < n)
{
        for (j = 0; j < i; j++)
        {
                _putchar(' ');
        }
        
        _putchar(92);
        _putchar('\n');
        i++;
}

}
