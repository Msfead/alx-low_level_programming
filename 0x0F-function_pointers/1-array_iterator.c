#include "function_pointers.h"

/**
 * array_iterator  - map array through point
 * @array: int array
 * @size: array size
 * @action: fincation point
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
