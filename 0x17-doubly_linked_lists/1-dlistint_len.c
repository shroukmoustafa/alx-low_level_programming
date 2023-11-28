#include "lists.h"
/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: head pointer
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
