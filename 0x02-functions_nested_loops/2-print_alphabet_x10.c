#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,in lowercase
 *
 */

void print_alphabet_x10(void)
{
int counter = 1;
while (counter <= 10)
{
char alpha;
char alpha_end = 'z';

for (alpha = 'a'; alpha <= alpha_end; alpha++)
{
_putchar(alpha);
}
_putchar('\n');

counter++;
}
}

