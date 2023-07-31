#include "main.h"

/**
*_strpbrk - function that gets the length of a prefix substring..
*@s: result
*@accept: patmeter
*Return: usigned int
*/

char *_strpbrk(char *s, char *accept)
{
	int k, l;
	char *p;

	k = 0;
	while (s[k] != '\0')
	{
		l = 0;
		while (accept[k] != '\0')
		{
			if (accept[l] == s[k])
			{
				p = &s[k];
				return (p);
			}
			l++;
		}
		k++
	}
	return (0);
}
