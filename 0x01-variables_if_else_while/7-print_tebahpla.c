#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in reverse order in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	char s;

	for (s = 'z'; s >= 'a'; s--)
	{
		putchar(s);
	}
	putchar('\n');

	return (0);
}
