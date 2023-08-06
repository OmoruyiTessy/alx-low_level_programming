#include <stdio.h>
/**
 * main - program that prints all arugment
 * @argc: count
 * @argv: vector
 * Return: can be 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
