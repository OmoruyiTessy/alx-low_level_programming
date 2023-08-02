#include "main.h"
/**
 * factorial - function that returns the factorial
 * @n: integer
 * Return: 0 or -1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
