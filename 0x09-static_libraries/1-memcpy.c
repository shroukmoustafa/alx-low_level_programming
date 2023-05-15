#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @n :number of copied bytes
 * @src :memory area where we copy from
 * @dest: memory area where we copy to
 *
 * Return: (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	j = 1;
	for (i = 1; i <= n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (j <= n)
	{
		dest--;
		j++;
	}
	return (dest);
}
