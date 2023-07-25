#include "main.h"

/**
*void _puts- Write a function that prints a string, followed by a new line
*&str: pramter
*Return: Always 0
*/

void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str + 0);
	str++;
}
_putchar('\n');
}
