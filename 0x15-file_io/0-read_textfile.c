#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to a string containing the name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf; /* buffer to hold file contents */
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL) /* check for NULL filename */
		return (0);

	fd = open(filename, O_RDONLY); /* open file for reading */
	if (fd == -1) /* check for error */
		return (0);

	buf = malloc(sizeof(char) * letters); /* allocate the buffer */
	if (buff == NULL) /* check for malloc() error */
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buf, letters); /* read from file */
	if (bytes_read == -1) /* check for read() error */
	{
		free(buf);
		close(fd);
		return(0);
	}
	bytes_written = write(STDOUT_FILENO, buf, bytes_read); /* write to stdout */
	if (bytes_written == -1 || bytes_written != bytes_read) /* check for write() error */
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf); /* free buffer */
	close(fd); /* close file */
	return (bytes_written) /* return the number of bytes written */
}
