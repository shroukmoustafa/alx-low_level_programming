#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would
 *  need to flip to get from one number to another.
 *  @n: the number to be fliped
 *  @m: the number if wanted bytes to be flipped
 *  Return: the flipped number on sucess
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m;
	count = 0;
	while (xor_result != 0)
	{
		if (xor_result & 1)
			count++;
		xor_result >>= 1;
	}
	return (count);
}
