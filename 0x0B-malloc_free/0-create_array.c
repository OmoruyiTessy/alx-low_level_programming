#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that creates an array
 * @size: integer
 * @c: character
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
