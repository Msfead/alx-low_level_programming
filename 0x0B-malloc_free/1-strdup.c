#include "main.h"

/**
*_strdup - eturns a pointer to a newly allocated space in memory,
*@str : parmeeter
*Return: 0 always NULL
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;
	/*+1 on the size puts the end of string charcter*/
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
