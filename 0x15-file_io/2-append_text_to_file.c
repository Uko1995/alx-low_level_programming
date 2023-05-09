#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  *@filename: name of file
  *@text_content: string to be added at the end of the file
  *Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	long int wrote;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (!file)
		return (-1);

	if (text_content != NULL)
	{
		wrote = write(file, text_content, strlen(text_content));
		if (!wrote)
		{
			close(file);
			return (-1);
		}
	}

	if (!close(file))
		return (-1);
	return (1);
}
