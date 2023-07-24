#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: parameter to be swap
 * @b: parameter swap
 * Return: Always 0 or 1.
 */
void swap_int(int *a, int *b)
{
	int tessy;

	tessy = *b;
	*b = *a;
	*a = tessy;
}
