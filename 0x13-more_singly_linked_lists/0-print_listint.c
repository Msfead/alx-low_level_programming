#include "lists.h"

/**
 * print_listint - print linked lists
 * @h: pointer
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printd("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
