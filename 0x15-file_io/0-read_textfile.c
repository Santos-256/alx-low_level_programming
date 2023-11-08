#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -  reads a text file
 * and prints it to the standard output
 * @filename: text file
 * @letters: nuber of letters to read
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t numrd, numwr;
	char *buf;
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	numrd = read(fd, buf, letters);
	numwr = write(STDOUT_FILENO, buf, numrd);

	free(buf);
	close(fd);
	return (numwr);
}
