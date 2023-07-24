#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter 1
 * Return: Always 0 or 1.
 */
void rev_string(char *s)
{
	int length, t, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;

	t = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - t - 1];
		s[length - t - 1] = s[t];
		s[t] = temp;
		t++;
	}
}
