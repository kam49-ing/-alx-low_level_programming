#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the file name
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nw, nr;
	char *s;

	if (filename == NULL)
		return (0);
	s = (char *)malloc(sizeof(char) * (letters + 1));
	if (s == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	nr = read(fd, s, letters);
	nw = write(STDOUT_FILENO, s, nr);
	if (nr > nw)
	{
		close(fd);
		return (0);
	}
	close(fd);
	free(s);
	return (nw);

}
