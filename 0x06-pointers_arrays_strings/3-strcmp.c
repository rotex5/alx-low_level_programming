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
	if (s1 == s2)
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

}
