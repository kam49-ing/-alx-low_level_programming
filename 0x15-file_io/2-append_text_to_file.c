#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename
 * @text_content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	ssize_t nw;

	fd = open(filename, O_WRONLY|O_APPEND);
	if (fd == -1)
		return (-1);
	for (n = 0; text_content[n] != '\0'; n++);
	nw = write(fd, text_content, n);
	if (nw == -1)
		return (-1);
	return (1);
}
