#include "main.h"
/**
 * read_textfile - eads a text file and prints it to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: number, or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(o);
	if (o == -1 || r == -1 || w == -1 || w != r)
		return (0);
	return (w);
}
