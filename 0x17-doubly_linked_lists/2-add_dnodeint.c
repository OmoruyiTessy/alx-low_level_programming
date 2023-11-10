#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: heaid
 * @n: value of element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *d;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	d = *head;

	if (d != NULL)
	{
		while (d->prev != NULL)
			d = d->prev;
	}

	new->next = d;

	if (d != NULL)
		d->prev = new;

	*head = new;

	return (new);
}
