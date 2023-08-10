#include "main.h"

/**
*malloc_checked - Write a function that allocates memory .
*@b : parmeeter
*Return: 0 always NULL
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
