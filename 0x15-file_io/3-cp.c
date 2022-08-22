#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 1204
#define SE STDERR_FILENO

/**
 * main - check the code
 * @ac: argment count
 * @av: array of arguments passed
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int s_fd = 0, d_fd = 0;
	char buffer[1024];
	ssize_t tn_read = 0, tn_wrote = 0;
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);

	s_fd = open(av[1], O_RDONLY);
	if (s_fd < 0)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);

	tn_read = read(s_fd, buffer, SIZE);
	if (tn_read < 0)
	{
		close(s_fd);
		dprintf(SE, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	d_fd  = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (d_fd < 0)
	{
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	}


	tn_wrote = write(d_fd, buffer, tn_read);
	if (tn_wrote < 0)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);

	close(s_fd);
	close(d_fd);

	if (!close(s_fd) || !close(d_fd))
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(100);
	return (0);
}
