#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
	dog_t *new_dog = NULL;
	char *new_name = NULL, *new_owner = NULL;
	int name_len = 0, owner_len = 0, i = 0, j = 0;

	for (; *(name + name_len) != '\0'; i++)
		name_len++;

	for (; *(owner + owner_len) != '\0'; j++)
		owner_len++;

	new_dog = malloc(sizeof(*new_dog));
	new_name = malloc(sizeof(*new_name) * (name_len + 1));
	new_owner = malloc(sizeof(*new_owner) * (owner_len + 1));

	if (new_dog == NULL || new_name == NULL || new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		free(new_owner);
		return (NULL);
	}


	for (i = 0; *(name + i) != '\0'; i++)
		*(new_name + i) = *(name + i);
	*(new_name + i) = '\0';


	*(new_owner + owner_len) = '\0';
	--owner_len;
	for (; owner_len >= 0; owner_len--)
		*(new_owner + owner_len) = *(owner + owner_len);

	new_dog->age = age;
	(*new_dog).name = new_name;
	new_dog->owner = new_owner;

	return (new_dog);
}

