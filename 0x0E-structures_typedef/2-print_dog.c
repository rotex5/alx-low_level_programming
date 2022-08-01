#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: the dog structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			d->name = "(nil)";
				printf("Name: %s\n", d->name);

		/** if ((*d).age == 0) */
		printf("Age: %f\n", d->age);

		if ((*d).owner == NULL)
			d->owner = "(nil)";
				printf("Owner: %s\n", d->owner);

		/**printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, (*d).age, d->owner);*/
	}
}
