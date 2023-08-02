#include "main.h"
/**
 * _strlen_recursion - funtion that returns the length of a string
 * @s: string pointer
 * Return: can be 1 or 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
