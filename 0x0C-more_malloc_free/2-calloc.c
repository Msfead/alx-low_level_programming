#include "main.h"

/**
 * _memset - filles menory with byte
 * @s: parmeter
 * @b: parmeter
 * @n: parmeter
 * Return: 0 always
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
*_calloc -  function that allocates memory for an array, .
*@nmemb : parmeeter
*@size: parmetter
*Return: 0 always NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
