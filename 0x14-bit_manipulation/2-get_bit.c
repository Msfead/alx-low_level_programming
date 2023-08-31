#include "main.h"

/**
 * get_bit - eturns the value of a bit at a given index.
 * @n: parmeter
 * @index: string
 * Return: value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
