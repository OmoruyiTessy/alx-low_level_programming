#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: the character
 * Return: can be 1 or 0
 */
void print_chessboard(char (*a)[8])
{
	int y, z;

	for (y = 0; y < 8; y++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(a[y][z]);
		}
		_putchar('\n');
	}
}
