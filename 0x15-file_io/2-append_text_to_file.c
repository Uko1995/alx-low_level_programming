#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end to the  file
 * @filename: The filename to open and append in
 * @text_content: The NULL terminated string to add
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * nor write fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wrote, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (*(text_content + len))
		len++;

	wrote = write(file, text_content, len);
	close(file);
	if (wrote < 0)
		return (-1);

	return (1);
}
