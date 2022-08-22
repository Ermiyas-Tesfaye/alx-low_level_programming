#include "main.h"
/**
 * create_file - a fun.. that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL turmenated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, b_written = 0;
	int i;

	for (i = 0; text_content[i]; i++)
		;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		b_written = write(fd, text_content, i);
	close(fd);
	if (b_written < 0)
		return (-1);
	return (1);
}
