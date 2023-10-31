#include "main.h"
/**
 * read_textfile - eads a text file and prints it to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: number, or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buf;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	bytes_read = read(file_descriptor, buf, letters);
	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(buf);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written != bytes_read)
	{
		close(file_descriptor);
		free(buf);
		return (0);
	}

	close(file_descriptor);
	free(buf);
	return (bytes_read);
}
