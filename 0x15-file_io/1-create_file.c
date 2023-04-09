#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content of the created file;
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, wd;
	unsigned long int i = 0, len = 0;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);
	if (!fd || fd == -1)
		return (-1);

	if (text_content != NULL)
	{

	while (text_content[i])
		len++;
	}
	wd = write(fd, text_content, len);
	if (!wd || wd == -1)
		return (-1);

	close(fd);
	return (1);
}
