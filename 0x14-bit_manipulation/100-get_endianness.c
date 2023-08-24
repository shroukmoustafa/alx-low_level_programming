#include <stdio.h>
#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int va(lue;
	unsigned char *byte;

	value = 1;
	*byte = (unsigned char *)&value;
	if (*byte)
		return (1);
	else
		return (0);
}
