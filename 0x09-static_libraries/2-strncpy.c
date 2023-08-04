#include "main.h"

/**
**_strncpy - function that copies a string.
*@dest: parmeter
*@src: parmeter
*@n: parmeter
*Return: Always 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/**
	 * if there is no null
	 * the string placed dest
	*/

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * lenght of source less than n
	 * write add null
	*/

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
