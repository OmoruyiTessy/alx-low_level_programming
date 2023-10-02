#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - Write a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to a character
 * @letters: parameter
 * Return: 1, 0 or -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_l;
	ssize_t lenread, lenwrite;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_l = open(filename, O_RDONLY);
	if (file_l == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_l);
		return (0);
	}
	lenread = read(file_l, buffer, letters);
	close(file_l);
	if (lenread == -1)
	{
		free(buffer);
		return (0);
	}
	lenwrite = write(STDOUT_FILENO, buffer, lenread);
	free(buffer);
	if (lenread != lenwrite)
		return (0);
	return (lenwrite);
}
