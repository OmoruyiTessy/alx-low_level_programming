#include "main.h"
#include <stdio.h>
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}
