#include "main.h"

/**
**_strcpy - Write a function that co
*the string pointed to by src,
*including the terminating null byte (\0),
*to the buffer pointed to by dest
*@dest: parmeter
*@src: parmeter
*Return: Always 0
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

return (dest);
}
