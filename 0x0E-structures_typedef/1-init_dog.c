#include "dog.h"
#include "stdlib.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer to a structure
 * @name: dog's name
 * @owner: owner's name
 * @age: dog age
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
