#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: the head of the linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int r = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);

			h = h->next;
			r++;
		}
	}
	return (r);
}
