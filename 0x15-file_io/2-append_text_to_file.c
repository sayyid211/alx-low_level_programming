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
 *appent_text_to_file - appends a given text to the end of a file
 *
 * @filename: dest file
 * @text_content: text to append
 * Return: success(1) or failure(-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int txt;
	int size = _strlen(text_content);

	if (!filename || !text_content)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
	txt = write(fd, text_content, size);

	if (fd < 0 || txt < 0)
		return (-1);
	close(fd);
	return (1);
}
