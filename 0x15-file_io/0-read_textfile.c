#include "main.h"
/**
 * read_textfile - reads a file and prints to standard output
 * @filename: file to be read and printed
 * @letters: number of bytes
 * Return: number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wd;
	char *buff = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rd = read(fd, buff, letters);
	wd = write(STDOUT_FILENO, buff, rd);

	close(fd);
	free(buff);
	return (wd);
}
