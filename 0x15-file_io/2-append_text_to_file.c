#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to a character
 * @text_content: pointer to a text
 * Return: 1, 0, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_l, letters, rwr;

	if (!filename)
		return (-1);


	file_l = open(filename, O_WRONLY | O_APPEND);

	if (file_l == -1)
		return (-1);


	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rwr = write(file_l, text_content, letters);
		if (rwr == -1)
			return (-1);
	}
	close(file_l);
	return (1);
}
