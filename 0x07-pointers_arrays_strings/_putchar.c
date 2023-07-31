#include <unistd.h>

/**
 * putchar - write chart c to stdout
 * @c: The charcter to print
 * Return : on succsess 1.
 * on error, -1 is returned, and errmo is set.
*/

int _putchar(char c)
{
        return (write(1, &c, 1));
