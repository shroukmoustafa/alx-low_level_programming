#include "main.h"

/**
 * print_alpabet - program prints the alphabet 
 * followed by new line
 *
 * return: always 0 (success)
*/

void print_alphabet(void)
{       char ch;
        for (ch = 'a'; ch <= 'z'; ch++)
        {
		_putchar (ch);
        }
	_putchar('\n');
}
