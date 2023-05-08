#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 *  followed by a new line.
 *
 *@s: the string to be reversed
*/

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		_putchar(*s);
		s--;
	}

}
