#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: number of bites
 * Return: pointer on sucess , 98 on failuer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
