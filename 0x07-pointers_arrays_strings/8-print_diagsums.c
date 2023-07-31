#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: an integer
 * @size: parameter
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int tessy, num1 = 0, num2 = 0;

	for (tessy = 0; tessy < size; tessy++)
	{
		num1 += a[tessy];
		a += size;
	}
	a -= size;

	for (tessy = 0; tessy < size; tessy++)
	{
		num2 += a[tessy];
		a -= size;
	}
	printf("%d, %d\n", num1, num2);
}
