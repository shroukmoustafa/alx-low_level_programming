#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 * @head: head pointer
*/
void free_listint(listint_t *head)
{
	listint_t *current, *next;
	
	if (head == NULL)
		return;
	current = head;
	while (current->next)
	{
		next = current->next;
		free(current);
		current = next;	
	}
	free(next);
}
