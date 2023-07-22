#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as
 *  a parameter on each element of an array.
 *  @array : pointer to the array 
 *  @size: array size
 *  @action: s a pointer to the function you need to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
	for (i = 0; 1 < size; i++)
	{
		action(array[i]);
	}
	}
}
