#include "main.h"

/**
 * print_sign - print numbers either positive or negative
 * @n: function parameter
 * Return: now is 1 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
