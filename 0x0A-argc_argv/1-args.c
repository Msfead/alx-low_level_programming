#include <stdio.h>

/**
 * main - print number og arg
 * @argc : parmeter
 * @argv : parmeter
 * Return : 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
