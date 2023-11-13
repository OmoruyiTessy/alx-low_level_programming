#include "main.h"
/**
 * _abs - function to find the absolute value of a number
 * @a: parameter function
 * Return: now a or -a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
