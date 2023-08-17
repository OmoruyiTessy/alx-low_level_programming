#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: a const character
 * @n: a const integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sub;
	unsigned int i;

	va_start(sub, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(sub, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(sub);
}
