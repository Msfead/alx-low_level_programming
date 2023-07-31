#include "main.h"

/**
*_strspn - function that gets the length of a prefix substring..
*@s: result
*@accept: patmeter
*Return: usigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; accept[l] != s[k]; l++)
		{
			if (accept[l] == '\0')
				return (k);
		}
	}
	return (k);
}
