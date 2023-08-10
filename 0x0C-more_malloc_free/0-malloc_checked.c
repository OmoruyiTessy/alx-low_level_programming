#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: parameter
 * Return: result
 */
void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);

	if (result == NULL)
	{
		exit(98);
	}
	else
		return (result);
}
