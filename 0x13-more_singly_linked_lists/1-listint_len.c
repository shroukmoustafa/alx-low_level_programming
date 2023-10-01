#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * listint_len -  a function that returns the number
 * of elements in a linked listint_t list.
 * @h: is a head pointer
 * Return:  the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;
	listint_t *temp;

	temp = (listint_t *) h;
	while (temp)
	{
		if (temp != NULL)
		{
			count++;
			temp = temp->next;
		}

	}
	return (count);
}

