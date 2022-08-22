#include "main.h"
/**
 * append_text_to_file - a fun.. that appends text at the end of file
 * @filename: name of the file
 * @text_content: a NULL terminated string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != '\0';)
		i++;
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	write(file, text_content, i);
	close(file);
	return (1);
}
