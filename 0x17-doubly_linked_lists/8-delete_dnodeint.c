#include "lists.h"

/**
 * delete_dnodeint_at_index - functions that deletes the node at index
 * of a linked list
 * @head: head
 * @index: index of the new node
 * Return:success 1, failed -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int t;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	t = 0;

	while (h1 != NULL)
	{
		if (t == index)
		{
			if (t == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		t++;
	}

	return (-1);
}
