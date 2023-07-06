#include "main.h"

/**
 * factorial - a function that returns the factorial
 * of a given number.
 * @n: the number to get its factorial
 * Return: result
*/
int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	f = n * factorial(n - 1);
	return (f);
}
