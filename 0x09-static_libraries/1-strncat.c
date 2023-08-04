#include "main.h"

/**
**_strncat - function that concatenates two strings
*@dest: parmeter
*@src: parmeter
*@n: parmeter
*Return: Always 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find seize of dest*/

	while (dest[c])
		c++;

	/**
	 * src does not need null
	 * if it counite more
	*/

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = '\0';

	return (dest);
}

