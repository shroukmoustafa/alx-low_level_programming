#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: an array of integers
 * @size: is the number of elements in the array array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
	if (size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((cmp(array[i]) != 0))
		{
			return (i);
		}
	}
	}
		return (-1);
}
