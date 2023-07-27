#include "main.h"

/**
 * _isalpha - upper or lower case
 * @c: paramaters
 * Return: either 1 0r 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
