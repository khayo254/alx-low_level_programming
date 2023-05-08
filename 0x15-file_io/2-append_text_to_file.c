#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;
	int i = 0;

	/* Check if filename is null */
	if (filename == NULL)
		return (-1);

	/* get the length of the text content */
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	/* open the file for appending */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* Write the text to the file */
	if (text_content != NULL)
	{
		if (write(fd, text_content, i) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
