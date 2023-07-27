#include "main.h"

/**
 * puts_half - prints half a string
 * @str: parameter 1
 * Return: Always 0 or 1.
 */
void puts_half(char *str)
{
	int full_string, half_string;

	full_string = 0;
	while (str[full_string] != '\0')
		full_string++;

	half_string = full_string / 2;

	if (full_string % 2 == 1)
		half_string++;

	while (half_string < full_string)
	{
		_putchar(str[half_string]);
		half_string++;
	}
	_putchar('\n');
}
