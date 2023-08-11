#include "main.h"

/**
*_puts -  print string.
*@str : parmeeter
*Return: 0 always NULL
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
*_atoi - convert string.
*@s : parmeeter
*Return: 0 always NULL
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if  (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}
	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}

/**
*print_int - print.
*@n : parmeeter
*Return: 0 always NULL
*/
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	       ;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
resp = n / divisor;
_putchar('0' + resp);
}
}


/**
 *main - print result followed by line
 *@argc : parmeter
*@argv: parmeter
*Return: 0 always
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
