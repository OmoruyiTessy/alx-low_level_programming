#include "main.h"
/**
 * print_line - print a straight line
 * @n: no of lines
 * Return: can be 1 or 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
