#include "main.h"
#include <stdlib.h>

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
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: array members number
 * @size: the size of each member
 * Return: pointer on success, NULL on failuer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb || size == 0)
		return (NULL);
	void *array = malloc (nmemb * sizeof(int));
	if (array == NULL)
		return (NULL);
	_memset(array, 0, sizeof(int) * nmemb);
	return (array);
}
