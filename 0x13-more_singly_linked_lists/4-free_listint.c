#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 * @head: head pointer
*/
void free_listint(listint_t *head)
{
	list_t *current, *next;

	if (head == NULL)
		return;
	current = head;
	while (current->next != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	free(current->str);
	free(current);
}
