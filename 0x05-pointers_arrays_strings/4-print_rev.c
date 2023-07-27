#include "main.h"

/**
 * print_rev - Write a function that prints a string, in reverse
 * @s: pointer for string
 * Return: Always 0 or 1.
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
