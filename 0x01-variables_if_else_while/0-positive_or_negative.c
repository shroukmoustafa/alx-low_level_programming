#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A C program that prints with put function
 *
 * Return: Always 0 (Success)
*/


/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0);
	{
	       	printf ("%d is positive, n");
	}
	if (n == 0);
	{
		printf ("%d is equal zero, n");
	}
	if (n <= 0);
	{
		printf ("%d is negative, n");
	}	
	return (0);
}
