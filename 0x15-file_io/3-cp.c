#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * exit_with_error - program that copies the content of a file to another file
 * @code: integer
 * @message: pointer to a char
 * Return: void
 */
void exit_with_error(int code, const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(code);
}
/**
 * main - main function
 * @argc: count
 * @argv: vector
 * Return: 1, 0, -1
 */

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_to, fd_from;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to");
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s");
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		exit_with_error(99, "Error: Can't write to file %s");
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			exit_with_error(99, "Error: Can't write to file %s");
		}
	}

	if (bytes_read == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s");
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
