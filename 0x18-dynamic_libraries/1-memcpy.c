#include "main.h"
/**
 * _memcpy - function that copies a memory area
 * @dest: memory area
 * @src: from memory area
 * @n: number of integer
 * Return: can be 1 or 2
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		dest[t] = src[t];
	return (dest);
}
