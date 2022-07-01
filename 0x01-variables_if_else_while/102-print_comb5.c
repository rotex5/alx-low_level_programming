#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99.
 *
 * Return: returns 0
 */
int main(void)
{
int i, j;
int a, b, c, d;

i = 0;
	while (i < 100)
	{
		a = i / 10; /* doubles fnum */
		b = i % 10; /* singles fnum */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* doubles snum */
			d = j % 10; /* singles snum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
i++;
	}
	putchar(10);

	return (0);
}
