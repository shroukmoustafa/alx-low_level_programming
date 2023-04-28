#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Do not print 2 and 4
*/

void print_most_numbers(void)
{
	for (i = 0;i <= 9;i++)
	{ 
		if (!(i == 4) && !(i == 2))
				{ 
				_putchar(i);
				}
	}
	_putchar('\n');
}
