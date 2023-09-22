#include "lists.h"
/**
 * print_list: a function that prints all the elements of a list_t list.
 * @h: head pointer
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	if (h == NULL)
		return (0);
	while (current->next)
	{
		i++;
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}
	i++;
	printf("[%d] %s\n", current->len, current->str);
	return (i);
}
