#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * constractor - excute before main
 * Return: void
 */

void _constractor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
