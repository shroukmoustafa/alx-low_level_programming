#include "lists.h"
#include <stdlib.h>
/**
 * add_node - function that adds a new node at 
 * the beginning of a list_t list.
 * @head: a pointer
 * @str: the reqired string to be add
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;

	if (str == NULL)
		return 	NULL;
	first = malloc(sizeof(list_t));
	if (first == NULL)
	{
		free(first);
		return (NULL);
	}
	first->str = strdup(str);
	if (first->str == NULL)
	{
		free(first);
		return NULL;
	}
	first->next = *head;
	first->len = strlen(str);
	*head = first;
	return (first);
}

