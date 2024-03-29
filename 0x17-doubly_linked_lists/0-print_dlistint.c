#include "lists.h"
/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list.
 * @h : node pointer
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
