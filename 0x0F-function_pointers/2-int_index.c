#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of elemnts
 * @size: is the number of elements in the array array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: returns the index of the first element for
 * which the cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (*array && size && (*cmp)(int))
	{
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	}
	return (-1);
}
