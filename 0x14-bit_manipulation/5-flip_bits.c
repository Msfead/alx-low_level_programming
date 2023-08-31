#include "main.h"

/**
 * flip_bits - returns the number of bitsfrom one number to another
 * @n: parmeter
 * @m: seconde parmeter
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
