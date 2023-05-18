#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit (98);
	}
	return (p);
}
