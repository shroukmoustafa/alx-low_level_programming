#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 * @array: a pointer of the first element of the array to print
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	if (array && size && action)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
