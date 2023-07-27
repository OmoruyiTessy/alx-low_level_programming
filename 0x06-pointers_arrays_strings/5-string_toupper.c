#include "main.h"

/**
 ** string_toupper - changes all lowercase letters of a string to uppercase
 ** @a: pointer to string
 ** Return: Always 0.
 **/
char *string_toupper(char *a)
{
	int lenght_of_string;

	lenght_of_string = 0;
	while (a[lenght_of_string] != '\0')
	{
		if (a[lenght_of_string] >= 97 && a[lenght_of_string] <= 122)
		{
			a[lenght_of_string] = a[lenght_of_string] - 32;
		}
		lenght_of_string++;
	}
	return (a);
}
