#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard ouput
 * @filename: name of file
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it should read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buffer;
	ssize_t tn_read = 0, tn_wrote = 0;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(*buffer) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	tn_read = read(fd, buffer, letters);
	if (tn_read < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	tn_wrote = write(STDOUT_FILENO, buffer, tn_read);
	if (tn_wrote < 0)
		return (0);

	free(buffer);
	close(fd);

	return (tn_read);
}
