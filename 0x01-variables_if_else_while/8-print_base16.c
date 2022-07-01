#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all numbers of base64 in lowercase.
 *
 * Return: 0
 */
int main(void)
{
char alpha;
int i;

i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
alpha = 'a';
while (alpha < 'g')
{
putchar(alpha);
alpha++;
}
putchar('\n');

return (0);
}
