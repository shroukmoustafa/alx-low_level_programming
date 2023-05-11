#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: the number to be tested
 *
 *Return: (-1) when the number is less than 0 ,
 * other wise it returns the factorial
*/

int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	f = n * factorial(n - 1)
	return (f);
}
