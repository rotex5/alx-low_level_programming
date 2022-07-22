#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string to be scanned
 * @accept: string that list of characters to match in s
 * Return: Return length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int num;
	int counter, i;

	num = 0;
	counter = 0;
	while (*(s + counter))
	{

		/**num = 0;*/
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *(s + counter))
			{
				num++;
				break;
			}
			else if (*(accept + i + 1) == '\0')
			{
				return (num);
			}
		}
		/**
		 * if (*(s + counter) != *(accept + i))
		{
			break;
		}
		*/

		counter++;
	}
	return (num);
}
