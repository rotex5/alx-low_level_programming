#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size to allocate
 * Return: A void pointer to memory space allocted
 */

void *malloc_checked(unsigned int b)
{
	/**unsigned int *ptr;**/
	void *ptr;

	/**ptr = malloc(sizeof *ptr * b);*/
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);

}
