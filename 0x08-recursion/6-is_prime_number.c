#include "main.h"
/**
 * _prime_ - print a prime number
 * @x: an integer
 * @y: second prime num
 * Return: can be anything
 */
int _prime_(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (_prime_(x, y + 1));
}
/**
 ** is_prime_number - print a prime number
 ** @n: an integer
 ** Return: can be anything
 **/
int is_prime_number(int n)
{
	return (_prime_(n, 2));
}
