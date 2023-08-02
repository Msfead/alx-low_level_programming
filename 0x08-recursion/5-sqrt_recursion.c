#include "main.h"

/**
*_sqrt_recursion-returns the natural square root of a number.
*@n : parmeeter
*@v: parmeeter
*Return: 0 always
*/

int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
*square-returns the natural square root of a number.
*@n : parmeeter
*@v: parmeeter
*Return:int
*/

int square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, v + 1));
	else
		return (-1);
}
