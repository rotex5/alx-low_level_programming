#include "main.h"
#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
long int num;
long int i;

num = 612852475143;
i = 2;
while (i <= num)
{
if (num % i == 0)
{
num /= i;
i--;
}
i++;
}
printf("%ld\n", i);
return (0);
}
