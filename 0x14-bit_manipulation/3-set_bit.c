#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer
 * @index: index
 * Return: 1 on sucess, 0 on failuer
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	unsigned long int mask = 1UL << index;
	*n |= mask;
	return (1);
}
