#include "main.h"

/**
*array_range -  function that creates an array of integers..
*@min : parmeeter
*@max: parmetter
*Return: 0 always NULL
*/

int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
