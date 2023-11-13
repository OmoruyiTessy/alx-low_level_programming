#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: consist only bytes
 * Return: can be s
 */
unsigned int _strspn(char *s, char *accept)
{
	int t, z;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (z = 0; s[t] != accept[z]; z++)
		{
			if (accept[z] == '\0')
				return (t);
		}
	}
	return (0);
}
