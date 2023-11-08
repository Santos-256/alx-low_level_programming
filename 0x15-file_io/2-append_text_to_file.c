#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: content to be added
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int O;
	int wrt;
	int longi = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (longi = 0; text_content[longi];)
			longi++;
	}

	O = open(filename, O_WRONLY | O_APPEND);
	wrt = write(O, text_content, longi);

	if (O == -1 || wrt == -1)
		return (-1);

	close(O);
	return (1);
}
