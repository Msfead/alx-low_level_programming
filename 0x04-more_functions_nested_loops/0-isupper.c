#include "main.h"

/**
*main - Entry point
*Descraption: Write a function that checks for uppercase character.
*Return: Always 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
