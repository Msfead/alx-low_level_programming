#include "lists.h"

/**
 * pop_listint - pops head
 * @head: address of pointer
 * Return: value of pop
 */

int pop_listint(listint_t **head)
{
	listint_t *node;

	int = n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
