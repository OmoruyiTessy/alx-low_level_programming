 #include "main.h"
/**
 ** _strncpy - copies a string
 ** @dest: a charater
 ** @src: another character
 ** @n: an integer
 ** Return: Always 0.
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int count_of_bytes;

	for (count_of_bytes = 0; count_of_bytes < n && src[count_of_bytes] != '\0';
	count_of_bytes++)
	dest[count_of_bytes] = src[count_of_bytes];

	for (; count_of_bytes < n; count_of_bytes++)
	dest[count_of_bytes] = '\0';
	return (dest);
}
