#include <stdio.h>
/**
 * main - main block
 *
 * Description: print the alphabet in lowercase execpt q and e.
 *
 * Return: 0
 *
 */
int main(void)
{

char alpha = 'a';
char q = 'q';
char e = 'e';

while (alpha <= 'z')
{
if (alpha == e || alpha == q)
{
alpha++;
continue;
}
putchar(alpha);
alpha++;
}
putchar('\n');

return (0);
}
