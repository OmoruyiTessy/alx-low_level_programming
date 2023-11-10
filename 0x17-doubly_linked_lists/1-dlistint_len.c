#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in double linked
 * @h: head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int ct;

	ct = 0;

	if (h == NULL)
		return (ct);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		ct++;
		h = h->next;
	}

	return (ct);
}
