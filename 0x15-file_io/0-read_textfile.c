#include "main.h"
#define BUF_SIZE 1024
/**
 * read_textfile - eads a text file and prints it to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: number, or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
{
return (0);
}

FILE *file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}

char buffer[BUF_SIZE];
ssize_t total = 0;
size_t bytes_to_read = letters;
ssize_t bytes_read;

while (bytes_to_read > 0 && (bytes_read =
fread(buffer, 1, BUF_SIZE, file)) > 0)
{
ssize_t bytes_written = write(STDOUT_FILENO, buffer,
(bytes_read < bytes_to_read) ? bytes_read : bytes_to_read);

if (bytes_written <= 0 || bytes_written != bytes_read)
{
fclose(file);
return (0);
}

bytes_to_read -= bytes_read;
total += bytes_read;
}

fclose(file);
return (total);
}
