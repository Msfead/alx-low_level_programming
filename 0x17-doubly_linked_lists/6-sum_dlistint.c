#include "lists.h"

/**
 * sum_dlistint - sums valus
 * @head: pointer
 * Return: int of valus
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
