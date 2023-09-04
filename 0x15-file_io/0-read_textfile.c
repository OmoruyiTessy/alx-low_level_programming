#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile -  function that reads a text file and prints
 * @filename: pointer to a char
 * @letters: of size_t
 * Return: 0, 2 or -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer;
	ssize_t bytes_rd, bytes_wr;

	if (filename == NULL)
	return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(f);
		return (0);
	}
	bytes_rd = read(f, buffer, letters);
	if (bytes_rd == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	bytes_wr = write(STDOUT_FILENO, buffer, bytes_rd);
	free(buffer);
	if (bytes_rd != bytes_wr)
		return (0);
	return (bytes_wr);
}
