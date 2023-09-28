#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a str
 * Return: can be 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int length = 0;
	int i;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
		}
		else if (b[i] == '1')
		{
			result += base;
		}
		else
		{
			return (0);
		}
		base *= 2;
	}
	return (result);
}
