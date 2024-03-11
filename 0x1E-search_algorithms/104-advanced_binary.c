#include "search_algos.h"
#include <stdlib.h>
/**
 * print_array - prints an array
 * @array: a pointer to the first element of the array to print
 * @low: the first index to print
 * @high: the last index to print
 */
void print_array(int *array, size_t low, size_t high)
{
	char *separator = NULL;

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		if (separator)
			printf("%s%d", separator, array[low]);
		else
			printf("%d", array[low]);
		separator = ", ";
	}
	printf("\n");
}

/**
 * advanced_binary - searches for a value in an array of integers using the
 *		binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, else, -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	print_array(array, low, high);
	return (binary_helper(array, low, high, value));
}
/**
 * binary_helper - helper function to binary_search
 * @array: a pointer to the first element of the array to search in
 * @low: start point
 * @high: end point
 * @value: the value to search for
 *
 * Return: the first index where value is located, else, -1
 */
int binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low == high)
	{
		if (array[low] == value)
			return (low);
		else
			return (-1);
	}
	else
	{
		mid = (low + high) / 2;

		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		else if (array[mid] == value && array[mid - 1] == value)
			high = mid;
		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid;
		print_array(array, low, high);
		return (binary_helper(array, low, high, value));
	}
}
