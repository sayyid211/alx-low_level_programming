#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments count
 * @argv: arguments vector
 * REturn: success or failure
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t rd, wr, cf;
	char text[1024];

	rd = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Erroe: Can't write to %s\n", argv[2]);
		exit (99);
	}
	while (rd == 1024)
	{
		rd = read(file_from, text, 1024);
		if (rd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit (98);
		}
		wr = write(file_to, text, rd);
		if (wr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit (99);
		}
	}
	cf = close(file_from);
	if (cf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit (100);
	}
	cf = close(file_to);
	if (cf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit (100);
	}
	return (0);
}
