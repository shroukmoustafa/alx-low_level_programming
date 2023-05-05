#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest:a string that will be added to
 * @src:a string that will be  add
 * Return:a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src);
{
	int c, c1;

	c = 0;
	while (dest[c])
	
			c++;
	
	for (c1 = 0; src[c1]; c1++)
	{
	dest[c++] = src[c1];
	}
	return (dest);
}
