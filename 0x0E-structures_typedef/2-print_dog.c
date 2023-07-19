#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: a structure pointer
*/

void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", (!d->name ? "(nil)" : d->name));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (!d->owner ? "(nil)" : d->owner));
	}
}
