#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - Create a function that creates a file.
 * @filename: a pointer to a character
 * @text_content: pointer to the text content
 * Return: 1, 0 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bytes_wr;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
	bytes_wr = write(f, text_content, strlen(text_content));
		if (bytes_wr == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
