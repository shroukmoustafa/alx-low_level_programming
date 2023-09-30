#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: a head pointer
*/
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	free(current->str);
	while (current->next != NULL)
	{
		next = current->next;
		free(current->str);
		free(current->len);
		free(current);
		current = next;
	}
	free(current);
}
