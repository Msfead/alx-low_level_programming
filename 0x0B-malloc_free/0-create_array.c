#include "main.h"

/**
*create_array - creates an array of chars, and initializes
*@size : parmeeter
*@c: parmeter
*Return: 0 always NULL
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;

	return (n);
}
