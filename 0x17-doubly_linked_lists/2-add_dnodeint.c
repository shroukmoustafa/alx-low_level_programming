#include "lists.h"
/**
 * add_dnodeint - a function that adds a new
 * node at the beginning of a dlistint_t list.
 * @head: head pointer
 * @n: the added node
 * Return: the address of the new element,
 *  or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);
	current->prev = NULL;
	current->n = n;
	current->next = *head;
	if (*head != NULL)
		(*head)->prev = current;
	*head = current;
	return (current);
}
