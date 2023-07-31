#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: parameter1
 * @needle: parameter2
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int tessy;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		tessy = 0;

		if (haystack[tessy] == needle[tessy])
		{
			do {
				if (needle[tessy + 1] == '\0')
					return (haystack);
				tessy++;
			} while (haystack[tessy] == needle[tessy]);
		}
		haystack++;
	}
	return ('\0');
}
