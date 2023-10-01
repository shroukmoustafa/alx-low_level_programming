#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint -  function that adds a new node at the
 * beginning of a listint_t list.
 * @head: a poiter to the first node
 * @n: the value of the new node
 * Return:the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next =  *head;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
