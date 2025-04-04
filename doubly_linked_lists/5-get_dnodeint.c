#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node
 * @head: first node
 * @index: index of the node we want to check
 * Return: length of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			if (head->next == NULL && index > i)
			{
				return (NULL);
			}
			head = head->next;
		}
	}
	else
	{
		return (NULL);
	}
	return (head);
}
