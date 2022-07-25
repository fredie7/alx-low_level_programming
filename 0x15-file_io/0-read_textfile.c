#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: pointer to the name of the file.
 * @letters: number of letters the function should read and print.
 * Return: 0 if the function fails or filename == NULL.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, read_file, write_file;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
free(buffer);
return (0);
}
fd = open(filename, O_RDONLY);
read_file = read(fd, buffer, letters);
write_file = write(STDOUT_FILENO, buffer, read_file);
if (fd == -1 || read_file == -1 || write_file == -1 || write_file != read_file)
{
free(buffer);
return (0);
}
free(buffer);
close(fd);
return (write_file);
}
