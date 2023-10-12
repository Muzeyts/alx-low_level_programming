#include "lists.h"

/**
 * print_dlistint - this prints elements of a
 * dlistint_t list okay
 *
 * @h:which is  head of the list
 * Return: returns the nodes  number
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
