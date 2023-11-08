#include "main.h"

/**
 * create_file - creates file
 * @filename: name of the file to create
 * @text_content: a pointer to a string to be written in the file
 * as content
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int longi;
	int wrt;

	longi = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		text_content = " ";
		 for (longi = 0;  text_content[longi]; longi++)
			 wrt = write(fd, text_content, longi);
		 if (wrt == -1)
		 {
			 return (-1);
		 }
	}
	close(fd);
	return (1);
}
