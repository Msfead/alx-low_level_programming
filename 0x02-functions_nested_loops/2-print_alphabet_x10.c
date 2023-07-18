#include "main.h"
/**
*main - Entry point
*Descraption: print 10 time alphabet.
*Return: Always 0
*/
void print_alphabet_x10(void);
{
int i, j;

for (j = 0; i <= 9; i++)
{
	for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
	_putchar('\n');
}
}
