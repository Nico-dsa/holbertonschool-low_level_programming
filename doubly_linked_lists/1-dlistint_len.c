#include "lists.h"

/**
 * dlistint_len - function returns number of elements linked dlistint_t list
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int r = 0;

	while (h != NULL)
	{
		h = h->next;
		r++;
	}
	return (r);
}
