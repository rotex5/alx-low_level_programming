#include "main.h"

/**
 * print_last_digit - Check Holberton
 * @num: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number num
 */

int print_last_digit(int num)
{
int last_digit_of_num;

if (num < 0)
{
num = num * -1;
last_digit_of_num = num % 10;
/**_putchar('0' + last_digit_of_num); **/

}
else
{
last_digit_of_num = num % 10;
/**_putchar('0' + last_digit_of_num); **/
}

_putchar('0' + last_digit_of_num);
return (last_digit_of_num % 10);
}
