#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that creates array
 * @str: a string
 * Return: p
 */
char *_strdup(char *str)
{
	char *p;
	int sum = 0;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		sum++;
	p = malloc(sizeof(char) * sum + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	return (p);
}
