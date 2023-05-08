#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @n: number of bytes to be filed
 * @s: pointer to the first element of the array
 * @b: the value to put
 *
 * Return: (s)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	j = 1;

	for (i = 1; i <= n; i++)
	{
		*s = b;
		s++;
	}
	while (j <= i)
	{
		s--;
		i--;
	}
	return (s);
}
