#include "lists.h"

/**
 * insert_dnodeint_at_index - this inserts the recent or new 
 * node at the specific given position
 *
 * @h:symbol for the  head of the list
 * @idx: recent or new node index
 * @n:  recent or new node value
 * Return: returns address of new node, or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *recent;
	dlistint_t *head;
	unsigned int m;
	recent = NULL;
	if (idx == 0)
		recent = add_dnodeint(h, n);
	else
	{
		head = *h;
		m = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (m == idx)
			{
				if (head->next == NULL)
					recent = add_dnodeint_end(h, n);
				else
				{
					recent = malloc(sizeof(dlistint_t));
					if (recent != NULL)
					{
						recent->n = n;
						recent->next = head->next;
						recent->prev = head;
						head->next->prev = recent;
						head->next = recent;
					}
				}
				break;
			}
			head = head->next;
			m++;
		}
	}
	return (recent);
}
