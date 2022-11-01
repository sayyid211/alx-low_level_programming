#include "main.h"
int _strlen(char *s);
/**
 * _strlen - returns length of string
 * @s: arg
 * Return: strvlen
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != 0)
	{
		counter++;
	}
	return (counter);
}

/**
 * create_file - creates and modifies a file
 *
 * @filename: name of file to create
 * @text_content: text to write to created file
 * Return: Success(1) or failure (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t txt;
	int size = _strlen(text_content);

	if (!filename)
		return (-1);


	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		txt = write(fd, text_content, size);
		txt[size] = '\0';
		if (txt == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
