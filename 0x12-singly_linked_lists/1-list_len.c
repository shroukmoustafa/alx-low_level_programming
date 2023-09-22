#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list_t list
 * @h : head pointer
 * Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	if (h == NULL)
		return (0);
	while (current->next)
	{
		i++;
		current = current->next;
	}
	i++;
	return (i);
	
}
