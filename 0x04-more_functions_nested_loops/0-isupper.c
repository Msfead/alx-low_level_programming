#include "main.h"

/**
*_isupper - Entry point
*Descraption: Write a function that checks for uppercase character.
*@c:parmeter
*Return: Always 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
