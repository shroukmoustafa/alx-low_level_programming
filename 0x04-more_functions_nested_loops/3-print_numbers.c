#include "main.h"

/**
 * print_numbers - Entry point
 *
 * a function that prints the numbers, from 0 to 9
 * followed by a new line
 *
 * Return: 0 (success)
*/

void print_numbers(void)
{
	for (int i = 48; i <= 57; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
