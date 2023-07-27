#include "main.h"

/**
 * puts2 - prints every other character
 * @str: parameter 1
 * Return: Always 0 or 1.
 */
void puts2(char *str)
{
	int t = 0;

	while (str[t] != '\0')
	{
		if (t % 2 == 0)
		{
			_putchar(str[t]);
		}
		t++;
	}
	_putchar('\n');
}
