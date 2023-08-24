#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - a function that converts a binary number 
 * to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the unsigned int number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
	if (b[i] != '0' && b[i] != '1')
		return (0);
	result = result * 2 + (b[i] - '0');
	i++;
	}
	return (result);
}
