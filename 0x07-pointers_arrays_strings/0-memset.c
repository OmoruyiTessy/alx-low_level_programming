#include "main.h"
/**
 * _memset - function thats fills memory with a constant byte
 * @s: parameter1
 * @b: parameter2
 * @n: unsigned parameter
 * Return: nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
