#include "main.h"

/**
**string_toupper - function that reverses the content of an array of integers.
*@str: parmeter
*Return: Always 0
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
