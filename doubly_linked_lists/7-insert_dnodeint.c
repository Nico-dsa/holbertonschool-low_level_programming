#include "lists.h"

/**
  * insert_dnodeint_at_index - function inserts a new node at a given position
  * @h: head of the linked list
  * @idx: index of node
  * @n: value of the node
  * Return: the address of the new node, or NULL if it failed
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;
	unsigned int i;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		tmp = *h;
		i = 1;
		if (tmp != NULL)
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		while (tmp != NULL)
		{
			if (i == idx)
			{
				if (tmp->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = tmp->next;
						new_node->prev = tmp;
						tmp->next->prev = new_node;
						tmp->next = new_node;
					}
				}
				break;
			}
			tmp = tmp->next;
			i++;
		}
	}
	return (new_node);
}
