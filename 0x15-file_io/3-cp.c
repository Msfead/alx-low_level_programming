#include "main.h"

#define USAGE "usage: cp file_from filr_to\n"
#define ERR_NOREAD "ERROR: Can't read from file %s\n"
#define ERR_NOWRITE "ERROR: Cant write to %s\n"
#define ERR_NOCLOSE "ERROR : Can't close kd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @a: argment
 * @v: vector
 * Return: 1 on success 0 on fail
 */

int main(int a, char **v)
{
	int from_kd = 0, to_kd = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (a != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_kd = open(v[1], O_RDONLY);
	if (from_kd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, v[1]), exit(98);
	to_kd = open(v[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_kd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, v[2]), exit(99);

	while ((b = read(from_kd, buf, READ_BUF_SIZE)) > 0)
		if (write(to_kd, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, v[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, v[1]), exit(98);
				from_kd = close(from_kd);
				to_kd = close(to_kd);
				if (from_kd)
				dprintf(STDERR_FILENO, ERR_NOCLOSE, from_kd), exit(100);
				if (to_kd)
				dprintf(STDERR_FILENO, ERR_NOCLOSE, from_kd), exit(100);

				return (EXIT_SUCCESS);
				}
