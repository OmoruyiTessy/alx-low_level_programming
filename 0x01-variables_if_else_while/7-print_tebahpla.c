#include <stdio.h>

/**
 * main - main is a function
 *
 * Return: ends with 0
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
