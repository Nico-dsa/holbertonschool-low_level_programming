#include "lists.h"

/**
  * sum_dlistint - function that returns the sum of all the data (n)
  * @head: head of the linked list
  * Return: if the list is empty, return 0
  */

int sum_dlistint(dlistint_t *head)
{
	int r = 0;

	while (head)
	{
		r += head->n;
		head = head->next;
	}
	return (r);
}
