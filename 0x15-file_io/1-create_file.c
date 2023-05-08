#include "main.h"

/**
 * create_file - creates a file with specified content
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 *
 * Return: 1 on success,  -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;
	int i = 0;

	if (filename == NULL) /* check for NULL filename */
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0')
			i++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(fd, text_content, i);

	if (fd == -1)
		return (-1);

	close(fd);

	return (1);
}
