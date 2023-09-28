#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int tes = 0;

	while (xor_result > 0)
	{
		tes += xor_result & 1;
		xor_result >>= 1;
	}
	return (tes);
}
