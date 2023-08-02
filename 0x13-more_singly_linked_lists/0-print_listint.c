#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: is a head pointer
 * Return:  the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;
	listint_t *temp;

	temp = (listint_t *) h;
	while (temp)
	{
		if (temp != NULL)
		{
			printf("%d\n", temp->n);
			count++;
			temp = temp->next;
		}

	}
	return (count);
}

