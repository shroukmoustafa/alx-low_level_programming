#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the
 *  input integer is a prime number, otherwise return 0.
 *
 *  @n: the number to be checked
 *
 *Return: (1) if the number is prime, (1) if the number not prime
*/

int dividing(int n, int x);
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n <= 0)
		return (0);
	return (dividing(n, (n - 1)));
}
/**
 * dividing -  a function that checks the mouduls of n
 *
 * @n: the number to be checked
 * @x:is a natural number less than n
 *
 * Return: (1) if the number is prime, (1) if the number not prime
*/

int dividing(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x != 0)
		dividing(n, (x - 1));
	else if (n % x == 0)
	{
		return (0);
	}
}
