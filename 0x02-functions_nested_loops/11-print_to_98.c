#include "main.h"
/**
*main - Entry point
*Descraption: prints all natural numbers from n to 98, followed by a new line.
*Return: Always 0
*/
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
