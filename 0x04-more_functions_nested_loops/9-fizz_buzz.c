#include <stdio.h>

/**
 * fizz_buzz - a program that prints the numbers from 1 to 100,
 *  followed by a new line.
 *   But for multiples of three print Fizz instead of 
 *   the number and for the multiples of five print Buzz.
 *   For numbers which are multiples of both three and five print FizzBuzz.
 *   Return: on success 0 ,
 *   on failuer 1
*/

void fizz_buzz(void)
{ 
	int i;
	int j;
	int k,

	    for  (i = 1; i <= 100; i++)
	    {
		    if ((i % 3) = 0)
		    {
			printf("Fizz");
			putchar(32);
		    } 
		    else if ((i % 5) = 0) 
		    {
			    printf("Buzz");
			    putchar(32);
		    }
		    else if (((i % 5) = 0) && ((i % 3) = 0))
		    {
			    printf("FizzBuzz");
			    putchar(32);
			}
		else
		    {
				printf("%d,i");
				putchar(32);
		    }

	    }
}
