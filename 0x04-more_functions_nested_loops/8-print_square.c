#include "main.h"

/**
*print_square - Write a function that draws a square, followed by a new line.
*@size: parmeter
*Return: Always 0
*/
void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
