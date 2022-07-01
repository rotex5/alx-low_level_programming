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
int last_num_of_n;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_num_of_n = n % 10;
if (last_num_of_n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_num_of_n);
}
else if (last_num_of_n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_num_of_n);
}
else
{
printf("Last digit of %d is %d and is less then 6 and not 0\n",
n, last_num_of_n);
}
return (0);
}
