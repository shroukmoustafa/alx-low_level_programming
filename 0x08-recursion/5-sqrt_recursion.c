#include "main.h"

/**
 *_sqrt_recursion: a function that returns the natural square root of a number.
 *
 * @n: the number its aquer root is taken
 *
 * Return: (-1) if the result not a natural number,
 * (result) otherwise
 */


int res1(int n, int g);
int _sqrt_recursion(int n)
{
	int z,
	if (n <= 0)
		return (-1);
	z = res1(n, 1);
	if ((z % 1) != 0)
	{
		return (-1);
	}
	else
		return (z);
}

/**
 *res1 - a function that calculates squer root.
 *
 *@g: the suggessted number to start with
 *@n: the number its aquer root is taken
 *
 * Return: the sguer root
*/
int res1(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		g = res1(n, (g - 1));
	if (g * g < n)
		g = res1(n, (g + 1));
	return (g);
}
