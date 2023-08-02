#include "main.h"

/**
*_print_rev_recursion - prints a stringa string in reverse.
*@s : parmeeter
*Return: 0 always
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		}
}
