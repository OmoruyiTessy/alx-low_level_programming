#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null
 */
char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *answer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	answer = malloc(sizeof(char) * (s1len + s2len) + 1);
	if (answer == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		answer[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		answer[s1len + i] = s2[i];
	return (answer);
}
