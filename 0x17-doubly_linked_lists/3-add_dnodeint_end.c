#include "lists.h"

/**
 * add_dnodeint_end - this  adds a current node at the end
 *
 * @head: list of the  head
 * @n: element value
 * Return: returns  address of the current element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = current;
	}
	else
	{
		*head = current;
	}
	current->prev = h;
	return (current);
}
