#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: adress of the beginning of the list
 * @n: data in the nodes
 *
 * Return: adress of the new element, or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	new_node->prev = NULL;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
