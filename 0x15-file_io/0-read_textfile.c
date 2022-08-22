#include "main.h"
/**
 * read_textfile - a fun.. that reads a text file and print it to POSIX
 * @filename: file name
 * @letters: size of the file in char
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t i;
	char *buff;
	int actual_num = 0;

	if (!(filename && letters))
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = (char *)malloc(letters + 1);
	if (!buff)
		return (0);
	read(fd, buff, letters);
	buff[letters] = '\0';
	for (i = 0; i < letters && buff[i] != '\0'; i++)
	{
		_putchar(buff[i]);
		actual_num++;
	}
	close(fd);
	free(buff);
	return (actual_num);
}
