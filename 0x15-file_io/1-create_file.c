#include "main.h"
/**
 * create_file - Create a function that creates a file.i
 * @filename: function to a pointer
 * @text_content: pointer to a char
 * Return: 1, 0 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_l, letters, rwr;

	if (!filename)
		return (-1);

	file_l = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_l == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		;
	rwr = write(file_l, text_content, letters);

	if (rwr == -1)
		return (-1);
	close(file_l);
	return (1);
}
