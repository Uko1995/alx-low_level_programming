#include "main.h"

/**
  * create_file - creates a file
  * @filename: pointer to file name
  * @text_content: string to write to file
  * Return: 1 on success or -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t wrote;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!file)
		return (-1);

	if (text_content != NULL)
	{
		wrote = write(file, text_content, strlen(text_content));
		if (!wrote)
			return (-1);
	}
	if (close(file))
		return (-1);

	return (1);
}
