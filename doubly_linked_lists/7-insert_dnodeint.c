#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node in the list at index
 * @h: list
 * @idx: index (given position)
 * @n: data
 * Return: length of the list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *current = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
