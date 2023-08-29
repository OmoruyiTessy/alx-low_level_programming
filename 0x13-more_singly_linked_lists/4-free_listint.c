#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to an argument
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;
		free(temp);
	}
}

