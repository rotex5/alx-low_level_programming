#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : prints the last digit of a number stored in variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int o = n % 10;
if (o > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, o);
}
else if (o == 0)
{
printf("Last digit of %d is %d and is 0\n", n, o);
}
else
{
printf("Last digit of %d is %d and is less then 6 and not 0\n",
n, o);
}
return (0);
}
