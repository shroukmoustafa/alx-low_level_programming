#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: a string to be counted
 *
 * Return: (count) the length of the string
*/

int _strlen_recursion(char *s)
{
	int count;

	int count = 0;
	if (*s != '\0')
	{
		count++;
		_strlen_recursion(s + 1);
	}
	return (count);
}
