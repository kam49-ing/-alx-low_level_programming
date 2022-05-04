#include "main.h"
/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: the content of the file to be added.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	size_t n = 0;
	ssize_t nw;

	if (filename == NULL)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		n++;
	fd = open(filename, O_CREAT|O_WRONLY|O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (n == 0)
	{
		close(fd);
		return (0);
	}

	nw = write(fd, text_content, n);
	close(fd);
	if (nw == -1)
	{
		return (-1);
	}
	return (1);

}
