#include "main.h"

/**
*_memset -  function that fills memory with a constant byte.
*@b: parmeter
*@s: result
*@n: patmeter
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; n > 0; k++, n--)
	{
		s[k] = b;
	}

return (s);
}
