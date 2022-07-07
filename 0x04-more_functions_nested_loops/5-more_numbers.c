#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */

void more_numbers(void)
{
int i;
int a;

for (i = 1; i <= 10; i++)
{

a = 0;
while (a <= 14)
{
if (a >= 10)
{
_putchar((a / 10) + 48);
}
_putchar((a % 10) + 48);

a++;
}
_putchar('\n');

}
}
