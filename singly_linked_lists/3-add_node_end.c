#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: adress of the beginning of the list
 * @str: data in the nodes
 *
 * Return: adress of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	unsigned int i = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	new_node->str = strdup(str);
	new_node->len = i;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next  = new_node;
	return (new_node);
}
