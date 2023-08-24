#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: head to a pointer
 * @str: needs to duplicate
 * Return: return list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int leng = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[leng])
		leng++;
	new->len = leng;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
