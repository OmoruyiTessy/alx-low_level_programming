#include "lists.h"
#include <stddef.h>
/**
 * listint_len - function that returns the number of elements in a linked.
 * @h: pointer to h
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
