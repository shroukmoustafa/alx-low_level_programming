#include "main.h"
#include "stdlib.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: (NULL) if failed, pointer on success
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned i;

	i = 0;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)p + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (p);
}
