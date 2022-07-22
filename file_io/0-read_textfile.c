#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX.
 * @letters: char*.
 * @filename: file.
 *
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int b, c;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);

	b = read(fd, buf, letters);
	if (b < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	c = write(STDOUT_FILENO, buf, b);
	if (c < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return ((ssize_t) c);
}

