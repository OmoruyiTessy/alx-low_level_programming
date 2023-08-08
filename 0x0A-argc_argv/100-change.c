#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a minimum number
 * @argc: count
 * @argv: vetor
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int minCoins = 0;
	int cents;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			minCoins++;
		}
	}
	printf("%d\n", minCoins);
	return (0);
}
