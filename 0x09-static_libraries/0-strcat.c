#include "main.h"
/**
 ** _strcat - concatenates two strings
 ** @dest: a charater
 ** @src: another character
 ** Return: Always 0.
 **/
char *_strcat(char *dest, char *src)
{
	int length_of_string, t;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (t = 0; src[t] != '\0'; t++, length_of_string++)
	{
		dest[length_of_string] = src[t];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
