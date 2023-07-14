#include "main.h"
#include "stdlib.h"
/**
 * _memset - a function that filles memory
 * @s: pointer
 * @b: constant
 * @n: max byts to use
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements of thea array
 * @size: number of bytes needed
 * Return: pointer on success, NULL on faileur
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, sizeof(int) * nmemb);
	return (p);
}

