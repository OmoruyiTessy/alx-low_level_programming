#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to head
 * @index: index of the starting from 0
 * Return: null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;
	dlistint_t *tmp;

	s = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == s)
	return (tmp);
	s++;
	tmp = tmp->next;
	}
	return (NULL);
}
