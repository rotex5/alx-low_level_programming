#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: A pointer to a string
 *@s2: A pointer to a character that will be changed
 *Return: return an integer indicating the result
 *of the comparison
 */

int _strcmp(char *s1, char *s2)
{

	char *str_one = s1;
	char *str_two = s2;


	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}

	return (*str_one - *str_two);

	/**
	 * if (s1 == s2)
	{
		return (0);
	}
	else if (s1 < s2)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
	 **/

}
