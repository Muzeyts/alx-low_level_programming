#include "lists.h"

/**
 * sum_dlistint - is sum of all  data for doubly linked list
 *
 * @head: lets say this the head of the list
 * Return: returns the total of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int total;
	total = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}
	return (total);
}
