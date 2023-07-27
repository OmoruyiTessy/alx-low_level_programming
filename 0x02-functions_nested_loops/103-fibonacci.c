#include <stdio.h>
/**
 * main - fibonacci can add two terms
 * Return: can be 0
 */
int main(void)
{
	int limit = 4000000;
	int term1 = 1;
	int term2 = 2;
	int fibo;
	int sum = 2;

	while (fibo <= limit)
	{
		fibo = term1 + term2;
		if (fibo % 2 == 0)
			sum = sum + fibo;
		term1 = term2;
		term2 = fibo;
	}
	printf("%d\n", sum);
	return (0);
}
