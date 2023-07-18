#include "main.h"
#include <stdio.h>
/**
 * main - main is a function
 *
 * Resturn: ends with 0
 */

void print_alphabet(void)
{
	int i;
	for (i = 0; i < 27; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}
