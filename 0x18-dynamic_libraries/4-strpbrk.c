#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: any of the bytes
 * Return: return null
 */
char *_strpbrk(char *s, char *accept)
{
	int tessy;

	while (*s)
	{
		for (tessy = 0; accept[tessy]; tessy++)
		{
			if (*s == accept[tessy])
				return (s);
		}
		s++;
	}
	return ('\0');
}
