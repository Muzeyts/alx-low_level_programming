#include "lists.h"

/**
 * add_dnodeint - this adds a current node tothe beginning
 * of a dlistint_t list of
 *
 * @head: this is  head of the list
 * @n: elements value 
 * Return: elementes address 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *h;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	current->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	current->next = h;

	if (h != NULL)
		h->prev = current;

	*head = current;

	return (current);
}
