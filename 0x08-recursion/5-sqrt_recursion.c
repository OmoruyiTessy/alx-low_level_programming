#include "main.h"
/**
 * sqrt_ - function that returns the natural square
 * @x: an integer
 * @y: integer second
 * Return: -1
 */
int sqrt_(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt_(x, y + 1));
}
/**
 ** _sqrt_recursion - function that returns the natural square
 ** @n: an integer
 ** Return: -1
 **/
int _sqrt_recursion(int n)
{
	return (sqrt_(n, 0));
}
