#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head :  head pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head ==  NULL)
		return;
	current = *head;
	while (current->next != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
	*head = NULL;
}
