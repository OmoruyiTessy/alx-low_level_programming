#include "main.h"
/**
 * more_numbers - to print 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
