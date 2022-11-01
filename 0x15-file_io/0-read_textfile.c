#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: name of file to read
 * @letters: number of characters in the file
 *
 * Return: actual number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t s; /* actual count of letters in file */
	int file_d; /* file discriptor for given file */
	char *txt; /* the string reserved for text in file */

	if (filename == NULL)
		return (0);
	txt = malloc(sizeof(char) * letters + 1);

	if (txt == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		free(txt);
		return (0);
	}
	s = read(file_d, txt, sizeof(char) * letters);
	if (s == -1)
	{
		free(txt);
		close(file_d);
		return (0);
	}
	s = write(STDOUT_FILENO, txt, s);
	if (s == -1)
	{
		free(txt);
		close(file_d);
		return (0);
	}
	free(txt);
	close(file_d);
	return (s);
}
