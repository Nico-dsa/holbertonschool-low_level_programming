#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @n: linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t r = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		r++;
	}
	return (r);
}
