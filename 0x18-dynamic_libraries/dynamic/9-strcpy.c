#include "main.h"

/**
 * *_strcpy - checks the length
 * @dest: parameter 1
 * @src: parameter 2
 * Return: Always 0 or 1.
 */
char *_strcpy(char *dest, char *src)
{
	int t = -1;

	do {
		t++;
		dest[t] = src[t];
	} while (src[t] != '\0');
	return (dest);
}
