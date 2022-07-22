#include "main.h"
/**
 * _isalpha - Check main.h
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */


int _isalpha(int c)
{
char alpha_upper;
char alpha_lower;
int bool = 0;

alpha_upper = 'A';
/**alpha_lower = 'a'; **/
while (alpha_upper <= 'Z')
{
alpha_lower = 'a';
while (alpha_lower <= 'z')
{
if (c == alpha_upper || c == alpha_lower)
{
bool = 1;
}

alpha_lower++;
}

alpha_upper++;
}
return (bool);

}
