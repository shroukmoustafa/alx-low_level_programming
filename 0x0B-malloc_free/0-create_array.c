#include "main.h"
#include "stdlib.h"

/**
 * *create_array - a function that creates an array of chars
 *  and initializes it with a specific char.
 *
 * @size: the needed size of the array
 * @c: the char to be intialized in the array
 *
 * Return: (0) success , (NULL) if failed or the size is 0
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * 1);
	if (*ptr == '\0')
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
