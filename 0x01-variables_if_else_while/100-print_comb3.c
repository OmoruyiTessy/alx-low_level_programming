#include <stdio.h>

/**
 * main - it is the main fuction
 *
 * Return: ends with 0
 *
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');

		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
		if (i % 10 == 0)
		{
			i += 10 - 1;
		}
	}
	return (0);
}
