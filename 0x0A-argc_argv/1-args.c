#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: count
 * @argv: vector
 * Return: can be 0
 */
int main(int argc, char *argv[])
{
	(void)  argv;
	printf("%d\n", argc - 1);
	return (0);
}
