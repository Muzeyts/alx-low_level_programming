#include "lists.h"

/**
 * delete_dnodeint_at_index - node at index of dlistint deleted
 *
 * @head: this shows head of the list
 * @index: new node index
 * Return: success return 1 else -1 at fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a;
	dlistint_t *b;
	unsigned int m;

	a = *head;

	if (a != NULL)
		while (a->prev != NULL)
			a = a->prev;

	m = 0;

	while (a != NULL)
	{
		if (m == index)
		{
			if (m == 0)
			{
				*head = a->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				b->next = a->next;

				if (a->next != NULL)
					a->next->prev = b;
			}

			free(a);
			return (1);
		}
		b = a;
		a = a->next;
		m++;
	}

	return (-1);
}
