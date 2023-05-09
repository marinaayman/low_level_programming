#include "main.h"

/**
  * read_textfile- reads a text file and prints it to the POSIX standard output.
  * @filename: A pointer to the name of the file.
  * @letters: the number of letters it should read and print.
  * Return: the actual number of letters it could read and print,
  *         0,  the file can not be opened or read.
  *             filename is NULL.
  *             write fails or does not write the expected amount of bytes.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buf;

	if (filename == NULL)
		return (0);
	if ((fd = open(filename, O_RDONLY)))
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	if ((n_read = read(fd, buf, letters)))
	{
		free(buf);
		return (0);
	}
	n_written = write(STDOUT_FILENO, buf, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (n_written);
}
