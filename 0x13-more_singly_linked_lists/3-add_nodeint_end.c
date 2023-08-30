#include "lists.h"

/**
 * add_nodeint_end - add node bottom
 * @head: pointer
 * @n: value for new node
 * Return: pointer of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *las;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		las = *head;
		while (las->next != NULL)
			las = las->next;
		las->next = new;
	}

	return (*head);
}
