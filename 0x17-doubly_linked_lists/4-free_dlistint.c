#include "lists.h"

/**
 * free_dlistint - this frees the dlistint_t list
 *
 * @head:which is the  head of the list
 * Return: there is no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *interim;
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((interim = head) != NULL)
	{
		head = head->next;
		free(interim);
	}
}
