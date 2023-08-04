#include "main.h"

/**
* _strlen- Write a function that returns the length of a string.
*@s: pramter
*Return: Always 0
*/

int _strlen(char *s)
{
int counter;

for (counter = 0; *s != '\0'; s++)
++counter;

return (counter);
}
