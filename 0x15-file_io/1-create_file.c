#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int fd = 0;
	int count = 0;
	ssize_t tn_wrote = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[count] != '\0')
			count++;
	}


	fd  = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
	{
		return (-1);
	}


	tn_wrote = write(fd, text_content, count);
	if (tn_wrote < 0)
		return (-1);

	close(fd);

	return (1);
}
