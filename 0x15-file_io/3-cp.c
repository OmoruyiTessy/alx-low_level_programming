#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_f(int fd);
/**
 ** create_buffer - Allocates bytes for a buffer.
 ** @file: pointer to a char
 ** Return: A pointer newly-allocated buffer.
 **/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 ** close_f - Closes file .
 ** @fid: The file to be closed.
 **/
void close_f(int fid)
{
	int a;

	a = close(fid);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fid);
		exit(100);
	}
}

/**
 ** main - Copies file.
 ** @argc: argument count.
 ** @argv: An array of pointers to the arguments.
 ** Return: 0 on success.
 ** Description: If the argument count is incorrect - exit code 97.
 ** If file_from does not exist or cannot be read - exit code 98.
 ** If file_to cannot be created or written to - exit code 99.
 ** If file_to or file_from cannot be closed - exit code 100.
 **/
int main(int argc, char *argv[])
{
	int start, end, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	r = read(start, buffer, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(end, buffer, r);
		if (end == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(start, buffer, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_f(start);
	close_f(end);
	return (0);
}
