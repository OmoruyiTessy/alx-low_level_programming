#include "main.h"
/**
 ** _strcmp - compares two strings
 ** @s1: first charater
 ** @s2: another character
 ** Return: Always 0.
 **/
int _strcmp(char *s1, char *s2)
{
	int counter, two_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	two_value = s1[counter] - s2[counter];
	return (two_value);
}
