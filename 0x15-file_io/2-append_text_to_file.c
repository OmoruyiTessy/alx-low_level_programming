#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to a char
 * @text_content: pointer to char
 * Return: 1, 0 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t conlen, bytes_wr;
	FILE *file = fopen(filename, "a");

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	if (file == NULL)
	{
		return (-1);
	}

	conlen = strlen(text_content);
	bytes_wr = fwrite(text_content, 1, conlen, file);

	fclose(file);

	if (bytes_wr == conlen)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
