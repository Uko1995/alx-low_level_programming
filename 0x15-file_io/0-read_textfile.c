#include "main.h"

/**
  * read_textfile - reads a text file and prints it to POSIX standard output
  * @filename: pointer to filename
  * @letters: number of letters to be read and printed
  *
  * Return: actual number of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, Read, Write;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	Read = read(file, buff, letters);
	if (Read == -1)
		return (0);
	Write = write(STDOUT_FILENO, buff, Read);
	if (Write == -1)
		return (0);
	if (close(file) == -1)
		return (0);
	free(buff);
	return (Write);
}
