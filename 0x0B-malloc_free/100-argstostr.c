#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: integer
 * @av: pointer to a pointer
 * Return: tessy
 */

char *argstostr(int ac, char **av)
{
	int i, k, total_len = 0;
	char *tessy;
	unsigned long int j;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
			total_len++;
			++total_len;
	}
	tessy = malloc((sizeof(char) * total_len) + 1);
	if (!tessy)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++, k++)
			tessy[k] = av[i][j];
			tessy[k] = '\n';
			++k;
	}
	tessy[++k] = '\0';
	return (tessy);
}
