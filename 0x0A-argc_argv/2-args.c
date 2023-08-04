#include <stdio.h>

/**
 * main -print any thing
 * @argc : parmeter
 * @argv : parmeter
 * Return:0 always
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
