#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: value 1
 * @max: value 2
 * Return: array
 */
int *array_range(int min, int max)
{
	int i;
	int range;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	array = malloc(range * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
