#include "main.h"
#include <stdio.h>
/**
 * print_binary_recursive - recursive function
 * @n: long int
 * Return: void
 */
void print_binary_recursive(unsigned long int n);
/**
 * print_binary - Write a function that prints the binary representatn of a num
 * @n: long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	print_binary_recursive(n);
}
/**
 ** print_binary_recursive - recursive function
 ** @n: long int
 ** Return: void
 **/
void print_binary_recursive(unsigned long int n)
{
	if (n > 0)
	{
		print_binary_recursive(n / 2);
		putchar((n % 2) + '0');
	}
}


