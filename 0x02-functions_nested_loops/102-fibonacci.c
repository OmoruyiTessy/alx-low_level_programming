#include <stdio.h>
/**
 * main - print fibonacci
 * Return: can be 0
 */

int main(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int fibo;
	int i;

	printf("%lu, ", term1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", term2);
		fibo = term1 + term2;
		term1 = term2;
		term2 = fibo;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
