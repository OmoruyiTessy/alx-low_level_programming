#include <stdio.h>
/**
 * main - print name
 * @argc: argument count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
