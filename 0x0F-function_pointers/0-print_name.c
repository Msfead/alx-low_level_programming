#include "function_pointers.h"

/**
 * print_name - print name
 * @name: string name
 * @f: print funcation
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
