#include "main.h"
#include <stdio.h>
/**
 * print_binary - Write a function that prints the binary representatn of a num
 * @n: long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}



