#include "main.h"
/**#include <stdio.h>**/

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		/**printf("%c",*(s + counter));**/
		counter++;
	}
	return (counter);
}
