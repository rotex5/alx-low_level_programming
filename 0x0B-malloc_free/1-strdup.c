#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter. 
 *  @s: pointer to a string
 * Return: pointer to newly created array
 */

char *_strdup(char *str)
{
	char *new_str;
	int i,j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while(*(str + i) != '\0')
	{
		i++;
	}

	new_str = (char *)malloc((i+1) * sizeof(char));

	if (new_str != NULL)
	{
		for (j=0; j<=i; j++)
		{
			*(new_str + j) = *(str + j);
		}
	}
	return(new_str);
}
