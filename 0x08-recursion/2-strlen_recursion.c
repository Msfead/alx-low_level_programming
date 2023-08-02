#include "main.h"

/**
_strlen_recursion - prints a stringa string in reverse.
*@s : parmeeter
*Return: 0 always
*/

int _strlen_recursion(char *s)
{
	int n = 0;
	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
