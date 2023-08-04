#include "main.h"

/**
*_strcat - function that concatenates two strings.
*@dest: parmeter
*@src: parmeter
*Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*through each src array value without null*/
	for (c2 = 0; src[2] ; c2++)
		/*append src[2] to dest*/
		dest[c++] = src[c2];

	return (dest);
}
