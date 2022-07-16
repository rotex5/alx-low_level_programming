#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer inputed
 * Return: void
 */

void print_number(int n)
{
	unsigned int a;
	unsigned int b;
	unsigned int counter;

	if (n >= 0)
	{
		a = n;
	}
	else
	{
		_putchar(45);
		a = n * -1;
	}

	b = a;

	counter = 1;
	while (b > 9)
	{
		b /= 10;
		counter *= 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((a / counter) % 10) + 48);
	}

}
