#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *temp;
	int len = 0;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	while (str[len])
		len++;

	a->len = len;
	a->str = strdup(str);
	if (*head == NULL)
	{
		a->next = *head;
		*head = a;
	}
	else
	{
		a->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = a;
	}
	return (a);
}
