#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_positive_number - bool
 * @str: string
 * Return: 1 or 2
 */
bool is_positive_number(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (false);
		}
	}
	return (true);
}
/**
 * main - that adds positive number
 * @argc: count
 * @argv: vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int num;

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			num = atoi(argv[i]);
			if (num >= 0)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
