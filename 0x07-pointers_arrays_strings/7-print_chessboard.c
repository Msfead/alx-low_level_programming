#include "main.h"

/**
*print_chessboard - function that prints the chessboard.
*@a: result
*Return: 0 always
*/

void print_chessboard(char (*a)[8])
{
	int k, l;

	for (k = 0; k < 8; k++)
	{
		for (l = 0; k < 8; k++)
		{
			_putchar(a[k][l]);
		}
		_putchar('\n');
	}
}
