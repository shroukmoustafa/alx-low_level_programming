#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: number of nedded memory
 * Return: pointer on success, 98 on fail */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == 0)
	{
		exit (98);
	}
	return (p);
}
