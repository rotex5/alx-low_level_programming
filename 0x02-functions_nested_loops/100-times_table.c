#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
                a = 0;
		while (a <= n)
		{
                        b = 0;
			while (b <= n)
			{
				c = b * a;
				if (b == 0)
				{
					_putchar(c + '0');
				} else if (c < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				} else if (c >= 10 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				} else if (c >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
                                b++;
			}
                        a++;
			_putchar('\n');
		}
	}
}
