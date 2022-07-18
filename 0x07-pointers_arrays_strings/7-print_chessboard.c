#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to array for row
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	i = 0;
	while (i < 8)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		i++;
		_putchar('\n');
	}
}
