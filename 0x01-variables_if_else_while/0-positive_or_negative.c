#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : a  program will assign a random number to the variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("value of a is : %d\n", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
else
{
printf("%d is negative", n);
}
return (0);
}
