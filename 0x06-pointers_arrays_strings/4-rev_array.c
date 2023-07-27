#include "main.h"
/**
 ** reverse_array - unction that reverses the content of an array of integers
 ** @a: first integer
 ** @n: another integer
 ** Return: for thing void
 **/
void reverse_array(int *a, int n)
{
	int content, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		content = a[counter];
		a[counter++] = a[n];
		a[n--] = content;
	}
}
