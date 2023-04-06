#include "lists.h"

/**
 * get_dnodeint_at_index - A function that gets a node at index
 * @head: head of the linked list
 * @index: index of node
 * 
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}
	return (head);
}
