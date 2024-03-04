#include "main.h"

/**
 * print_alpabet - program prints the alphabet
 * followed by new line
 *
 * return: always 0 (success)
*/

void print_alphabet_x10(void)
{       char ch;
	int i;
	for (i = 1; i < 11; i++)
	{
        	for (ch = 'a'; ch <= 'z'; ch++)
        	{
                	_putchar (ch);
        	}
		i++;
	}
        _putchar('\n');
}

