#include "main.h"

/**
 * _strlen -return length
 * @s: string
 * Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	return (0);
	while (*s++)
	i++;
	return (i);
}


/**
 * append_text_to_file - function that creates a file.
 * @filename: name file
 * @text_content: text to write
 * Return: 1 success 0 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int kd;
	ssize_t b = 0, len = _strlen(text_content);

	if (!filename)
	return (-1);
	kd = open(filename, O_WRONLY | O_APPEND);
	if (kd == -1)
	return (-1);
	if (len)
	b = write(kd, text_content, len);
	close(kd);
	return (b == len ? 1 : -1);
}
