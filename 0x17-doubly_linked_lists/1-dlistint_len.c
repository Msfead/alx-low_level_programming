#include "lists.h"

/**
 * dlistint_len - return length all the elements
 * @h: adress
 * Return: size
 **/

size_t dlistint_len(const dlistint_t *h)
{
        size_t i = 0;

        while (h)
        {
                h = h->next;
                i++;
        }
        return (i);
}
