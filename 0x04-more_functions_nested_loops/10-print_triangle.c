#include "main.h"
/**
 * print_triangle -  a function that prints a triangle
 * @size: parameter
 * Return: ends as 0 or 1
 */
void print_triangle(int size)
{
	int row, tab, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (tab = 1; tab <= row; tab++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
