#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: input string.
 * Return: the encodes output str.
 */

char *leet(char *str)
{
	int counter;
	int i;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	counter = 0;
	while (str[counter] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[counter] == lower_case[i] || str[counter] == upper_case[i])
			{
				str[counter] = numbers[i];
				break;
			}
		}
	counter++;
	}

	return (str);
}
