#include "main.h"

/**
 * _puts - prints a string
 * @str: parameter 1
 * Return: Always 0 or 1.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
