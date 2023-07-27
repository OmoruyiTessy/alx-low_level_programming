#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 * Return: Always 1 or 0
 */
int main(void)
{
	int add;
	char t;

	srand(time(NULL));
	add = 0;
	while (add <= 2645)
	{
		t = rand() % 128;
		add += t;
		putchar(t);
	}
	putchar(2772 - add);

	return (0);
}
