#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to the new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = name;
	(*ptr).age = age;
	ptr->owner = owner;

	return (ptr);
}
