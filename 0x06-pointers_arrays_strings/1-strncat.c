#include "main.h"
/**
 ** _strncat - concatenates two strings
 ** @dest: a charater
 ** @src: another character
 ** @n: an integer
 ** Return: Always 0.
 **/
char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, z;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
