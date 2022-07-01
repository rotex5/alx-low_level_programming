#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print all possible combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int i;
        int single_digit; 
        int double_digit;


	for (i = 0; i < 100; i++)
	{
		single_digit = i % 10;
		double_digit = i / 10;

		if (double_digit < single_digit)
		{
			putchar(double_digit + '0');
			putchar(single_digit + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

	}
	putchar('\n');

	return (0);
}
