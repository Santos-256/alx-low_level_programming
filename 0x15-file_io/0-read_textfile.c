#include <stdio.h>
#include <stdlib.h>

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

	ssize_t fd, numrd, numwr;
	char *buf;

	fd = popen(filename, numrd); //O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	numrd = fread(fd, buf, letters);
	numwr = fwrite(STDOUT_FILEND, buf, numrd);

	free(buf);
	pclose(fd);
	return (numwr);
}
