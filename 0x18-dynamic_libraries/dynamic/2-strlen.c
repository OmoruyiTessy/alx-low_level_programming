#include "main.h"
#include <stdio.h>

/**
 * _strlen - checks the length
 * @s: parameter 1
 * Return: Always 0 or 1.
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
