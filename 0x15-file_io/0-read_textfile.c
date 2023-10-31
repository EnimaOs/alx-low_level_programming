#include "main.h"
/**
 * read_textfile - eads a text file and prints it to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: number, or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *x;
	size_t k;

	fd = open(filename, O_RDONLY);

	if ((!filename) || (fd == -1))
		return (0);

	x = malloc(letters);
	letters = read(fd, x, letters);
	k = write(STDOUT_FILENO, x, letters);

	if (k != letters)
		return (0);

	close(fd);
	free(x);

	return (letters);
}
