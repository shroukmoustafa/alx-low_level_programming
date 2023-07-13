#include "main.h"
#include <stdlib>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: number of bites
 * Return: pointer on sucess , 98 on failuer
*/
void *malloc_checked(unsigned int b)
{
	int *ptr,
	
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
