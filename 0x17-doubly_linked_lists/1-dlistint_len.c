#include "lists.h"

/**
 * dlistint_len - this returns elements number
 * a double linked list of 
 *
 * @h:this is the  head of the list
 * Return: nodes number 
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counnt;

	counnt = 0;

	if (h == NULL)
		return (counnt);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counnt++;
		h = h->next;
	}

	return (counnt);
}
