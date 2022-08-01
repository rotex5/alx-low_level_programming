#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer to dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		(*d).name = NULL;


		free(d->owner);
		(*d).owner = NULL;


		free(d);
		d = NULL;
	}
}

