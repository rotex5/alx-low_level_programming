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
	int src_fd = 0, dst_fd = 0;
	char buffer[1024];
	int tn_read = 0, tn_wrote = 0;
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	/* or 0664 */

	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);

	src_fd = open(av[1], O_RDONLY);
	if (src_fd < 0)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);

	dst_fd  = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (dst_fd < 0)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		tn_read = read(src_fd, buffer, SIZE);
		if (tn_read == -1)
			dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);

		if (tn_read > 0)
		{
			tn_wrote = write(dst_fd, buffer, tn_read);
			if (tn_wrote < 0)
				dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	} while (tn_read > 0);
	tn_read = close(src_fd);
	if (tn_read < 0)
		dprintf(SE, "Error: Can't write to %d\n", src_fd), exit(100);

	tn_wrote = close(dst_fd);
	if (tn_wrote < 0)
		dprintf(SE, "Error: Can't write to %d\n", dst_fd), exit(100);

	return (0);
}
