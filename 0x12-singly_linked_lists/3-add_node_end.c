#include "lists.h"
/**
 * add_node_end - a function that adds a new
 * node at the end of a list_t list.
 * @head: head pointer
 * @str: string to be add
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *end_node;

	if (str ==  NULL)
		return (NULL);
	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = strdup(str);
	end_node->len = strlen(str);
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = end_node;
	return (end_node);
}
