#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: a string to be printed
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar ((char) *s);
	_puts_recursion(s + 1);
}
