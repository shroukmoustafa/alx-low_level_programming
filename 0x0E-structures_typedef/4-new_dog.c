#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: dog name
 * @age: dog name
 * @owner: dog owner name
 * Return: NULL ON failuer, pointer on sucess
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || size < 0 || !owner)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(_strlen(owner)+ 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (0);
	}
	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner,owner);
	returm (d);
}
