#include "main.h"
/**
*main - Entry point
*Descraption: prints the first 50 Fibonacci,starting with 1 2,by a new line.
*Return: Always 0
*/
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
		return (0);
}