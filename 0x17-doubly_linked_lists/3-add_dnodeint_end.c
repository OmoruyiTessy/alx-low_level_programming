#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list
 * @head: head
 * @n: value of the element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *d;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	d = *head;

	if (d != NULL)
	{
		while (d->next != NULL)
			d = d->next;
		d->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = d;

	return (new);
}
