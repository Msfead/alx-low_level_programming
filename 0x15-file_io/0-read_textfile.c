#include "main.h"

/**
 * read_textfile - reads text from afile
 * @filename: name file
 * @letters: number of bytes
 * Return: number bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int kd;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	kd = open(filename, O_RDONLY);
	if (kd == -1)
		return (0);
	b = read(kd, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(kd);
	return (b);
}
