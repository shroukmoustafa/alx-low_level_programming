#include "main.h"

/**
 * int _pow_recursion - a function that returns the value of x
 * raised to the power of y.
 *
 * @x: the number raised to the power
 * @y: the value of the power
 * Return: (1) if y equal to zero, otherwise (result)
*/

int _pow_recursion(int x, int y)
{
	int sqrt;

	if (y == 0)
		return (1);
	if (y > 0)
	{
		sqrt = x * _pow_recursion(x, (y - 1));
	}
	return(sqrt);
}
