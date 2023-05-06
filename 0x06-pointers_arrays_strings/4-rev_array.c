#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: the reversed array
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int t;

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		j--;
	}
}
