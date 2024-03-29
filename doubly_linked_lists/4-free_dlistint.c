#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of the linked list
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
