#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: variadic functions number
 * @...: ellipsis for variadic function
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ez;
	unsigned int i, sum = 0;

	va_start(ez, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ez, int);

	va_end(ez);
	return (sum);
}
