#include "main.h"
/**
*main - Entry point
*Descraption: prints the 9 times table, starting with 0.
*Return: Always 0
*/
void times_table(void)
{
	int n, l, m;

	for (n = 0; l <= 9; n++)
	{
		_putchar(48);
		for (l = 1; l <= 9; l++)
		{
			_putchar(',');
			_putchar(' ');

			m = n * l;
		/*
		 * put space if proudct is asibgle number
		 * place first digit if its two numbers
		 */
			if (m <= 9)
				_putchar(' ');
			else
				_putchar((m / 10) + 48); /*get the first digit*/
			_putchar((m % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
}
}
