#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: a pointer to the name of the file
* @letters: the number of letters the function should read and print
*
* Return: the actual number of letters it could read and print or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, readed;
char *buffer = malloc(sizeof(char *) * letters);

if (!buffer)
	return (0);

if (!filename)
	return (0);
fd = open(filename, O_RDONLY, 0600);
if (fd == -1)
	return (0);

readed = read(fd, buffer, letters);
write(STDOUT_FILENO, buffer, readed);

free(buffer);
close(fd);

return (readed);
}
