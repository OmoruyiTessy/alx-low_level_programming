#include "lists.h"

/**
 * sum_dlistint - function returns the sum of all the data (n) of a doubly list
 * @head: head
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_d;

	sum_d = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_d += head->n;
			head = head->next;
		}
	}

	return (sum_d);
}
