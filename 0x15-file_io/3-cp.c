#include "main.h"
/**
 * main - a program that copies the content of a file to another file
 * @argc: argument counter
 * @argv: argument variable
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	int file_origin, file_dest;
	ssize_t numb;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_origin = open(argv[1], O_RDONLY);
	if (file_origin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_dest = open(argv[2], O_CREAT | O_WRONLY, 0664);
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((numb = read(file_origin, buff, 1024)) > 0)
	{
		if (write(file_dest, buff, numb) != numb)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (numb == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((close(file_origin) == -1) || (close(file_dest) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_origin);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
