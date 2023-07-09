#include "main.h"

/**
 * _isdigit - Entry point
 * function that  checks for a digit (0 through 9)
 *
 * @c: is the checked character
 *
 * Return: 1 is digit , 0 is not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
