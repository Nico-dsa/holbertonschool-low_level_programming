#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes node at index of a linked list
 * @head: head of the linked list
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int i = 0;

	if (!head || !(*head))
	{
		return (-1);
	}
	else
	{
		tmp = *head;
		while (index != i++ && tmp)
			tmp = tmp->next;

		if (!tmp)
			return (-1);
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		if (index == 0)
			*head = tmp->next;
		else
			tmp->prev->next = tmp->next;

		free(tmp);
		return (1);
	}
	return (-1);
}
