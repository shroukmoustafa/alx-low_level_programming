#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list.
 * @head: head pointer
 * @index: the index of the wanted node
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	current =  head;
	while (current->next)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	free(current);
	return (NULL);
}
