#include "main.h"
/**
*swap_int - Write a function that swaps the values of two integers.
*@a: pramter
*@b: parmer
*Return: Always 0
*/

void swap_int(int *a, int *b)
{
int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
