#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - fuction that executes a function given on each element
 * @array: array
 * @size: is the size of the array
 * @action: is a pointer to the function you need
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
