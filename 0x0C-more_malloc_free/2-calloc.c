#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory
 * @nmemb: an array
 * @size: unsigned int
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
