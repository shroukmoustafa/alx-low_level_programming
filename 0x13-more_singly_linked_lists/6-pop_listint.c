#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t linked list
 *@head: head pointer
 *Return: returns the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *current;
	int x;

	current = *head;
	*head = current->next;
	x = current->n;
	free(current);
	return (x);
}
