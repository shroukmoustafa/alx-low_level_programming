#include "main.h"
#include "stdlib.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: (NULL) if failed, pointer if sucess
*/

int *array_range(int min, int max)
{
	int *a;
	int j = 0;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	while (min != max)
	{
		a[j] = min;
		min++;
		j++;
	}
	a[j] = max;
	return (a);
}
