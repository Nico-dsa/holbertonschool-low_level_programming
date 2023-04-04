#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function that returns number of elements in a linked list_t list
 * @h: linked list
 *
 * Return: number of nodes of list
 */

size_t list_len(const list_t *h)
{
	size_t r = 0;

	while (h != 0)
	{
		h = h->next;
		r++;
	}
	return (r);
}
