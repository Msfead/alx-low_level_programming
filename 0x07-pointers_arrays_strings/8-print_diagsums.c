#include "main.h"
#include <stdio.h>

/**
*print_diagsums - um of the two diagonals of a square matrix of integers..
*@a: result
*@size : parmeeter
*Return: 0 always
*/


void print_diagsums(int *a, int size)
{
	int k, l = 0, m = 0;

	for (k = 0; k < size; ++)
	{
		l += a[k];
		m += a[size - k - 1];
		a += size;
	}
	printif("%d, ", l);
	printif("%d\n", m);
}
