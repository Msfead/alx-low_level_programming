#include "main.h"
/**
*main - Entry point
*Descraption:computes the absolute value of an integer.
*Return: Always 0
*/
int _abs(int c)

{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
