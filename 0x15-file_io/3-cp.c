#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * create_new_file - copies contents of src file to dest file
 * @src_file: name of file
 * @dst_file: the number of letters it should read and print
 * Return: returns the actual number of letters it should read and print
 */

int create_new_file(const char *src_file, char *dst_file)
{

	int s_fd = 0, d_fd = 0;
	char *buffer;
	int len = 1024;
	ssize_t tn_read = 0, tn_wrote = 0;

	if (!src_file)
		exit(98);

	buffer = malloc(sizeof(*buffer) * len);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}


	s_fd = open(src_file, O_RDONLY);
	if (s_fd < 0)
		return (0);

	tn_read = read(s_fd, buffer, len);
	if (tn_read < 0)
	{
		free(buffer);
		close(s_fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}

	if (!dst_file)
		exit(99);

	d_fd  = open(dst_file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (d_fd < 0)
	{
		return (-1);
	}


	tn_wrote = write(d_fd, buffer, tn_read);
	if (tn_wrote < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dst_file);
		exit(99);
	}

	free(buffer);

	close(s_fd);
	close(d_fd);

	if (!close(s_fd) || !close(d_fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dst_file);
		exit(100);
	}

	return (tn_wrote);
}


/**
 * main - check the code
 * @ac: argment count
 * @av: array of arguments passed
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	/**
	int res;
	*/
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*
	res = create_new_file(av[1], av[2]);
	*/

	create_new_file(av[1], av[2]);

	/**
	printf("-> %i)\n", res);
	*/
	return (0);
}
