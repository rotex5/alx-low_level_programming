#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */

void print_most_numbers(void)
{
int num;

num = 48;
while (num <= 57)
{
if (num == 50 || num == 52)
{
num++;
continue;
}
else
{
_putchar(num);
}
num++;
}
_putchar('\n');
}
