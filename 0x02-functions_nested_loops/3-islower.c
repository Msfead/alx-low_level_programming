#include "main.h"
/**
*main - Entry point
*Descraption: print checks for lowercase character.
*Return: Always 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
