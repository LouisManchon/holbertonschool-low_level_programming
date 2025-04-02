#include "lists.h"

/**
 * list_len: returns the number of elements in a linked list
 * @h: a pointer to the head of the linked list
 *
 *
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	if (h == NULL)
	{
		return (0);
	}
	else

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

