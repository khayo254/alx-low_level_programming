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

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(fd);
	return (bytes_written);
}
