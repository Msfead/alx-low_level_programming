#include "lists.h"

/**
 * list_len - detrmente length of linked lists
 * @h: pointer to first node
 * Returen: size of list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}