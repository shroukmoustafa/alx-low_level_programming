#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * In function 'main' - Entry Point
 *
 * Description: A C program that prints with put function
 *
 * Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = (n % 10);
		if (
		(last_digit >= 5);
			printf("Last digit of %d is %d and is greater than 5", n, last_digit);
		   )
		if (
		(last_digit == 0);
			printf("Last digit of %d is %d and is 0", n, last_digit);
		   )
		if (
		(6 >= last_digit != 0);
		        printf("Last digit of %d is %d and is less than 6 and not 0", n,last_digit);
		   )
	return (0);
}
